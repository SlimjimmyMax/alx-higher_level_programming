// Task 8: Star Wars Movies
document.addEventListener('DOMContentLoaded', function () {
  fetch('https://swapi-api.alx-tools.com/api/films/?format=json')
    .then(response => response.json())
    .then(data => {
      const moviesList = document.querySelector('#list_movies');
      data.results.forEach(movie => {
        const listItem = document.createElement('li');
        listItem.textContent = movie.title;
        moviesList.appendChild(listItem);
      });
    });
});
