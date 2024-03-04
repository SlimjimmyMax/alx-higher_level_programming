// Task 3:Add the class red to the <header> element when the user clicks on the tag DIV#red_header
document.addEventListener('DOMContentLoaded', function () {
  document.getElementById('red_header').addEventListener('click', function () {
    document.querySelector('header').classList.add('red');
  });
});
