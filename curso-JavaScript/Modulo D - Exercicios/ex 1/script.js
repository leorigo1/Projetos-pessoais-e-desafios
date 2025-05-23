function atualizarhora () {
const agora = new Date();
const hora = agora.getHours();
const hour = document.getElementById("h1-texto");
const image = document.getElementById("imagem");

if (hora < 12) {
    hour.innerText = "Bom dia";
}

 if (hora > 12 && hora < 19) {
     hour.innerText = "Boa tarde";
     imagem.setAttribute("src", "imagens/tarde.jpg");
 }

if (hora > 19) {
    hour.innerText = "Boa noite";
        imagem.setAttribute("src", "imagens/noite.jpg");
}


}
     atualizarhora();