from flask import Flask, request, render_template
import mysql.connector

app = Flask(__name__)

# Conexão com o MySQL
db = mysql.connector.connect(
    host="localhost",
    user="root",
    password="",
    database="login_s"
)
cursor = db.cursor()

@app.route('/')
def index():
    return render_template('index.html')  # Seu HTML com o formulário

@app.route('/login', methods=['POST'])
def register():
    email = request.form['email']
    password = request.form['password']

    query = "INSERT INTO users (username, password) VALUES (%s, %s)"
    values = (email, password)
    cursor.execute(query, values)
    db.commit()

    return render_template('sucesso.html', email=email)

if __name__ == '__main__':
    app.run(debug=True)
