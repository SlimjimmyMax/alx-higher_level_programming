#!/usr/bin/node

const request = require('request');

const movieId = process.argv[2];
const apiUrl = `https://swapi-api.alx-tools.com/api/films/${movieId}`;

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
    const movieData = JSON.parse(body);
    const charactersUrls = movieData.characters;

    charactersUrls.forEach(characterUrl => {
      request(characterUrl, (error, response, body) => {
        if (error) {
          console.error(error);
          return;
        }

        if (response.statusCode !== 200) {
          console.error(`Failed to fetch character data. Status code: ${response.statusCode}`);
          return;
        }

        try {
          const characterData = JSON.parse(body);
          console.log(characterData.name);
        } catch (parseError) {
          console.error('Error parsing character JSON:', parseError);
        }
      });
    });
  } catch (parseError) {
    console.error('Error parsing movie JSON:', parseError);
  }
});
