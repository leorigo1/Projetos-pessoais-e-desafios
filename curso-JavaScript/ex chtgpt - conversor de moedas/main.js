function convert() {

const valorinserido = document.getElementById('valor').value;
const opcao = document.querySelector('input[name="option"]:checked');

if (!opcao) {
    alert("Selecione uma opção")
}

if (opcao.value === '1') {
const dolar = valorinserido * 5.66;
const dolarformatado = dolar.toFixed(2);
const txtresult = document.getElementById('resultado')
txtresult.innerHTML = `Você terá: ${dolarformatado} Dólares`;
}

if (opcao.value === '2') {
const euro = valorinserido * 6.39;
const euroformatado = euro.toFixed(2);
const txtresult = document.getElementById('resultado')
txtresult.innerHTML = `Você terá: ${euroformatado} Euros`;
}

if (opcao.value === '3') {
const libra = valorinserido * 7.58;
const libraformatado = libra.toFixed(2);
const txtresult = document.getElementById('resultado')
txtresult.innerHTML = `Você terá: ${libraformatado} Libras`;
}


}