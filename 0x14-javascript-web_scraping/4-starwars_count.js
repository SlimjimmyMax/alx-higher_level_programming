#!/usr/bin/node

const request = require('request');

const apiUrl = process.argv[2];
const characterId = '18';

request(apiUrl, (error, response, body) => {
  if (error) {
    console.error(error);
    return;
  }

  if (response.statusCode !== 200) {
    console.error(`Failed to fetch data. Status code: ${response.statusCode}`);
    return;
  }

  try {
    const filmsData = JSON.parse(body);
    let count = 0;

    // Loop through each film and check if "Wedge Antilles" is present
    filmsData.results.forEach(film => {
      if (film.characters.includes(`https://swapi-api.alx-tools.com/api/people/${characterId}/`)) {
        count++;
      }
    });

    console.log(count);
  } catch (parseError) {
    console.error('Error parsing JSON:', parseError);
  }
});
