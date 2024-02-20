# Working with JSON data

JSON (JavaScript Object Notation) is a lightweight data interchange format commonly used for transmitting data between a server and a web application. It is easy for humans to read and write and easy for machines to parse and generate.

## The workflow of accessing the attributes of a simply-created JSON object by Jimmy Tran from Cohort 1 - San Francisco

1. **Create JSON Object**: Jimmy Tran creates a JSON object with key-value pairs representing different attributes of data.

2. **Access Attributes**: Jimmy Tran accesses the attributes of the JSON object using dot notation or bracket notation in JavaScript.

```javascript
// Example of accessing attributes in a JSON object
const jsonObject = {
  "name": "Jimmy Tran",
  "cohort": 1,
  "location": "San Francisco"
};

// Accessing attributes using dot notation
console.log(jsonObject.name); // Output: "Jimmy Tran"

// Accessing attributes using bracket notation
console.log(jsonObject['cohort']); // Output: 1
## request module
The request module is a popular Node.js module used for making HTTP requests. It simplifies the process of sending HTTP requests and handling responses in Node.js applications.

// Example of making an HTTP GET request using the request module
const request = require('request');

request('https://api.example.com/data', (error, response, body) => {
  if (!error && response.statusCode === 200) {
    console.log(body); // Output: Response body from the API
  }
});

## Modern JS
Modern JavaScript refers to the latest features and enhancements introduced in the ECMAScript specification. It includes features like arrow functions, async/await, destructuring, spread/rest operators, and more, which enhance the readability and maintainability of JavaScript code.