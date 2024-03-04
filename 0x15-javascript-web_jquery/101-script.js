document.addEventListener('DOMContentLoaded', function () {
  const myList = document.querySelector('.my_list');

  document.getElementById('add_item').addEventListener('click', function () {
    const newItem = document.createElement('li');
    newItem.textContent = 'Item';
    myList.appendChild(newItem);
  });

  document.getElementById('remove_item').addEventListener('click', function () {
    const lastItem = myList.lastElementChild;
    if (lastItem) {
      myList.removeChild(lastItem);
    }
  });

  document.getElementById('clear_list').addEventListener('click', function () {
    myList.innerHTML = '';
  });
});
