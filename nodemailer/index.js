const nodemailer = require('nodemailer');

const transport = nodemailer.createTransport({
    host: 'smtp.gmail.com',
    port: 465,
    secure: true,
    auth: {
        user: 'leonardoluisorlandorigo@gmail.com',
        pass: 'puyklmswlucqbmex',
    }
});

transport.sendMail({
    from: 'Leonardo Rigo <leonardoluisorlandorigo@gmail.com>',
    to: 'gabrielmarin16159@gmail.com',
    subject: 'Email especial para você',
    html: '<h1>Me responda por favor.</h1><p>Que horas eu vou ali mano?</p>',
    text: '?'
})
.then(() => console.log('Email enviado com sucesso!'))
.catch((err) => console.log('Erro ao enviar o Email', err));