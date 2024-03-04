document.addEventListener('DOMContentLoaded', function () {
  document.getElementById('btn_translate').addEventListener('click', function () {
    const languageCode = document.getElementById('language_code').value;
    fetch(`https://www.fourtonfish.com/hellosalut/hello/?lang=${languageCode}`)
      .then(response => response.json())
      .then(data => {
        document.querySelector('#hello').textContent = data.hello;
      });
  });
});
