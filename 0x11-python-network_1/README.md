# Working with Internet Resources in Python

## Using `urllib` Package

- **Fetching Internet Resources with `urllib`:** The `urllib` package in Python allows you to open URLs and fetch data from them. You can use `urllib.request.urlopen()` to open a URL and read its content.

- **Decoding `urllib` Body Response:** After fetching a resource with `urllib`, you can decode the response using the `.read().decode()` methods to convert the response from bytes to a string.

## Using `requests` Package

- **Why `requests` is Simpler than `urllib`:** The `requests` package simplifies working with HTTP requests compared to `urllib`. It provides a higher-level interface.

- **Making HTTP GET Request:** Using `requests.get(url)` allows you to make an HTTP GET request. The response is a `Response` object, and you can access the content using `.text`.

- **Making HTTP POST/PUT/etc. Request:** You can use `requests.post(url, data=your_data)` to make a POST request. For other HTTP methods, replace `post` with the desired method.

- **Fetching JSON Resources:** When working with APIs that return JSON, you can use `requests.get(url).json()` to automatically parse the response as JSON.

- **Manipulating Data from an External Service:** After fetching data from an external service, you can manipulate it using Python's data manipulation libraries such as `pandas` or native data structures.

```python
import requests

# Example: Fetching and Manipulating JSON Data
url = 'https://jsonplaceholder.typicode.com/todos/1'
response = requests.get(url)
data = response.json()

# Now 'data' is a Python dictionary, and you can manipulate it as needed.
