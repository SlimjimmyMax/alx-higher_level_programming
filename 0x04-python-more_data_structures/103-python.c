#include <Python.h>

void print_python_list(PyObject *p)
{
    Py_ssize_t size, alloc, i;
    PyObject *item;

    if (!PyList_Check(p)) {
        fprintf(stderr, "[*] Invalid List Object\n");
        return;
    }

    size = PyList_Size(p);
    alloc = ((PyListObject *)p)->allocated;

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", alloc);

    for (i = 0; i < size; ++i) {
        item = PyList_GetItem(p, i);
        printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
    }
}

void print_python_bytes(PyObject *p)
{
    Py_ssize_t size, i;
    unsigned char *bytes;

    if (!PyBytes_Check(p)) {
        fprintf(stderr, "[.] bytes object info\n");
        fprintf(stderr, "  [ERROR] Invalid Bytes Object\n");
        return;
    }

    size = PyBytes_Size(p);
    bytes = (unsigned char *)PyBytes_AsString(p);

    printf("[.] bytes object info\n");
    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", PyUnicode_AsUTF8(p));

    printf("  first %ld bytes:", size < 10 ? size : 10);
    for (i = 0; i < size && i < 10; ++i) {
        printf(" %02x", bytes[i]);
    }
    printf("\n");
}
