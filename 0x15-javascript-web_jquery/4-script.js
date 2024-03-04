// Task 4: Toggle Classes
document.addEventListener('DOMContentLoaded', function () {
  document.getElementById('toggle_header').addEventListener('click', function () {
    const header = document.querySelector('header');
    header.classList.toggle('red');
    header.classList.toggle('green');
  });
});
