function calcular() {
    let valorinicial = Number(document.getElementById('inicio').value);
    let final = Number(document.getElementById('final').value);
    let incremento = Number(document.getElementById('incremento').value);
    let result = document.getElementById('resultado');

    result.innerHTML = '';

    if (incremento <= 0) {
        result.innerHTML = '⚠️ Incremento deve ser maior que zero.';
        return;
    }

    if (valorinicial > final) {
        result.innerHTML = '⚠️ Valor inicial deve ser menor ou igual ao valor final.';
        return;
    }

    for (let i = valorinicial; i <= final; i += incremento) {
        result.innerHTML += `${i} `;
    }
}