// Task 7: Star Wars Character
document.addEventListener('DOMContentLoaded', function () {
  document.querySelector('#character').addEventListener('click', function () {
    fetch('https://swapi-api.alx-tools.com/api/people/5/?format=json')
      .then(response => response.json())
      .then(data => {
        document.querySelector('#character').textContent = data.name;
      });
  });
});
