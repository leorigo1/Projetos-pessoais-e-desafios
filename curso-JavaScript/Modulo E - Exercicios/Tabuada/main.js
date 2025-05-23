function calcular () {

let valor = Number(document.getElementById('val').value);
let resultado = document.getElementById('result')
let mensagem = document.getElementById('mensagem')


mensagem.innerHTML = (' ')


for (let i=1; i<=10 ; i++) {
    let numeros = valor * i;


let item = document.createElement('option')
item.text = (`${valor} x ${i} = ${numeros}`)
resultado.appendChild(item);

}

}