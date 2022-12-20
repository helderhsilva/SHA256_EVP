# HASH generator with SHA256 and openssl 3.0 library

Based on a discipline that was using an old version of the openssl library for hash generation with sha256, this solution was proposed to replace the hash generator with the library currently in use.

---

<br>

## ⚠️ Prerequisites

-   [x] Openssl library in the most current version.
    -   Windows: Using Msys2.
    -   Linux: sudo apt-get install libssl-dev or other variations.
-   [x] To Compile: _g++ -std=c++17 _.cpp -o main.out -lcrypto\_
-   [x] To Run: _./main.out_

---

> Imagem retirada de: https://cacadoresdelendas.com.br/japao/kitsunes-a-raposa-de-muitas-caudas/

<br>

## ✅ Functionality Check

<table align="center">
    <tr>
        <td align="center">
            <br/>
            <img src="https://ik.imagekit.io/ibh8isfiw/Crypto/teste_execucao_sWNePclHy.png?ik-sdk-version=javascript-1.4.3&updatedAt=1671551812733" alt="Teste de Execução"/>
            <p>Teste de Execução do código no VSCode. </p>
            <br/>
            <img src="https://ik.imagekit.io/ibh8isfiw/Crypto/verificacao_terminal_SVpwk6TgW.png?ik-sdk-version=javascript-1.4.3&updatedAt=1671551812818" alt="Verificação no Terminal"/>
            <p>Verificação do hash obtido no terminal do Manjaro Linux. </p>
        </td>
    </tr>
</table>

---

<br>

## Cloning this Repository

1. On GitHub.com, navigate to the repository's main page.
2. Above the list of files, click code.
3. To clone the repository using HTTPS, under "Clone with HTTPS", click 📋. To clone the repository using an SSH key, including a certificate issued by your organization's SSH certificate authority, click Use SSH, then click 📋. To clone a repository using GitHub CLI, click Use GitHub CLI, then click 📋.
4. Open Git Bash.
5. Type git clone (clone git) and paste the URL you copied earlier.

```c
$ git clone https://github.com/helderhsilva/SHA256_EVP
```

6. Press Enter to create your local clone.

---

<br>

## 👨‍💻 Author

<table align="center">
    <tr>
        <td align="center">
            <a href="https://github.com/helderhsilva">
                <img src="https://avatars.githubusercontent.com/u/79870881?v=4" width="150px;" alt="Helder's Image" />
                <br />
                <sub><b>Helder Henrique</b></sub>
            </a>
        </td>    
    </tr>
</table>
<h4 align="center">
   By: <a href="https://www.linkedin.com/in/helderhsilva/" target="_blank"> Helder Henrique </a>
</h4>
