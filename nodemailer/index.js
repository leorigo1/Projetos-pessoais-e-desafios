const nodemailer = require('nodemailer');

const transport = nodemailer.createTransport({
    host: 'smtp.gmail.com',
    port: 465,
    secure: true,
    auth: {
        user: 'email de quem vai enviar',
        pass: 'senha gerado pelo google keys',
    }
});

transport.sendMail({
    from: 'Leonardo Rigo <email de quem vai enviar>',
    to: 'email da pessoa que vai receber',
    subject: 'Email especial para você',
    html: '<h1>Me responda por favor.</h1>',
    text: '?'
})
.then(() => console.log('Email enviado com sucesso!'))
.catch((err) => console.log('Erro ao enviar o Email', err));