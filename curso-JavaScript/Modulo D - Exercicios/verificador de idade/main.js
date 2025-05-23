function verificar () {

var data = new Date();
var ano = data.getFullYear();

const nasciment = document.getElementById('year').value;
const fim = document.getElementById('result');
const texto = document.getElementById('press');
const sexoSelecionado = document.querySelector('input[name="sex"]:checked');

  if (!nasciment || isNaN(nasciment) || nasciment > ano) {
        window.alert('Por favor, insira um ano de nascimento válido.');
        return;
    }

    if (!sexoSelecionado) {
        window.alert('Por favor, selecione o sexo.');
        return;
    }  

const gener = sexoSelecionado.value;  
const idade = ano - Number(nasciment);

var img = document.createElement('img');
img.setAttribute('id','foto')
img.style.width = "300px";
img.style.height = "300px"


if (gener === 'masc') {
  fim.innerHTML = (`Você é homem e possui ${idade} anos`); 
   img.setAttribute('src', 'images/masculino.jpg');
}

else if (gener === 'fem') {
  fim.innerHTML = (`Você é mulher e possui ${idade} anos`);  
img.setAttribute('src', 'images/feminino.png');
}

  fim.appendChild(img);
}
