function verificar() {
  const result = document.getElementById("resultado");
  const year = document.getElementById("idade");
  const image = document.getElementById("imagem");
  const yearnasciment = Number(year.value);

  const generoInput = document.querySelector('input[name="sexo"]:checked');

  if (!generoInput) {
    alert("Selecione um gênero!");
    return;
  }

  const generoselected = generoInput.value;

  if (generoselected === 'masculino') {
    image.setAttribute("src", "images/masculino.jpg");
  } else if (generoselected === 'feminino') {
    image.setAttribute("src", "images/feminino.png");
  }

  result.innerHTML = `Você é do gênero ${generoselected} e possui ${yearnasciment} anos!`;
}
