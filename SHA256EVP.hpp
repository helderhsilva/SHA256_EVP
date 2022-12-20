// Autor: Helder Henrique da Silva
// Data: de 15/11/2022
// Descrição: Biblioteca para cálculo do hash SHA256 de um arquivo usando a biblioteca openssl
//
// Copyright (C) 2022 Helder Henrique da Silva. Todos os direitos reservados.

#ifndef SHA256EVP_hpp
#define SHA256EVP_hpp

#include <openssl/evp.h>
#include <string>

using namespace std;

// Função que retorna o hash SHA256 de um arquivo
string printSha256(const char *path);

#endif /* SHA256EVP_hpp */