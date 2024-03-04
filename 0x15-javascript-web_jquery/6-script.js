
// Task 6: Change the Text
document.addEventListener('DOMContentLoaded', function () {
  document.getElementById('update_header').addEventListener('click', function () {
    document.querySelector('header').textContent = 'New Header!!!';
  });
});
