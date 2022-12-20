// Autor: Helder Henrique da Silva
// Data: de 15/11/2022
// Descrição: Função principal para teste
//
// Copyright (C) 2022 Helder Henrique da Silva. Todos os direitos reservados.

#include "SHA256EVP.hpp"
#include <iostream>

// Função principal para teste
int main(int argc, const char *argv[])
{
    // Imprime o hash SHA256 do arquivo kitsune.jpg
    cout << printSha256("images/kitsune.jpg") << endl;

    return 0;
}