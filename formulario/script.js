const inputs = document.querySelectorAll('.input');
const inputnas = document.querySelector('.inputnascimento');
const button = document.querySelector('.login__button');

const handleFocus = ({ target }) => {
  const span = target.previousElementSibling;
  span.classList.add('span-active');
};

const handleFocusout = ({ target }) => {
  if (target.value === '') {
    const span = target.previousElementSibling;
    span.classList.remove('span-active');
  }
};

const handlechange = () => {
  const [username, password, email] = inputs;

  if (username.value && password.value.length >= 8 && email.value && inputnas.value) {
    button.removeAttribute('disabled');
  } else {
    button.setAttribute('disabled', '');
  }
};

inputs.forEach((input) => {
  input.addEventListener('focus', handleFocus);
  input.addEventListener('focusout', handleFocusout);
  input.addEventListener('input', handlechange);
});

inputnas.addEventListener('input', handlechange);
