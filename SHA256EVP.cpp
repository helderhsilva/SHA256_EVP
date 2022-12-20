// Autor: Helder Henrique da Silva
// Data: de 15/11/2022
// Descrição: Código para cálculo do hash SHA256 de um arquivo usando a biblioteca openssl
//
// Copyright (C) 2022 Helder Henrique da Silva. Todos os direitos reservados.

#include "SHA256EVP.hpp"

std::string printSha256(const char *path)
{
    // ---------------------------------------------------------------------------------------------
    // 1: Criar o contexto

    // EVP_MD__CTX é um tipo de dados abstrato que representa o contexto de um algoritmo de hash
    // mdctx será usado para armazenar o contexto do algoritmo de hash
    EVP_MD_CTX *mdctx;

    // EVP_MD é um tipo de dados abstrato que representa um algoritmo de hash
    // md será usado para armazenar o algoritmo de hash
    const EVP_MD *md;

    // md_values[EVP_MAX_MD_SIZE] é um array de unsigned char que será usado para armazenar o hash
    unsigned char md_value[EVP_MAX_MD_SIZE];

    // md_len será usado para armazenar o tamanho do hash
    unsigned int md_len, i;

    // hexHash("") será usado para armazenar o hash em hexadecimal
    std::string hexHash("");

    // hexChar[2*EVP_MAX_MD_SIZE] será usado para armazenar o hash em hexadecimal
    char hexChar[2 * EVP_MAX_MD_SIZE];

    // ---------------------------------------------------------------------------------------------
    // 2: Inicializar o contexto

    // OpenSSL_add_all_digests() é usado para inicializar o contexto
    // md é inicializado com o algoritmo de hash
    // mdctx é inicializado com o contexto do algoritmo de hash
    // EVP_DigestInit_ex() é usado para inicializar o contexto do algoritmo de hash
    OpenSSL_add_all_digests();
    md = EVP_get_digestbyname("sha256");
    mdctx = EVP_MD_CTX_create();
    EVP_DigestInit_ex(mdctx, md, NULL);

    // ---------------------------------------------------------------------------------------------
    // 3: Ler o arquivo e atualizar o contexto

    // BIO é usado para ler o arquivo
    BIO *fileBio = BIO_new_file(path, "r");

    // data é usado para armazenar os bytes lidos do arquivo
    char data;

    // Enquanto houver bytes para ler, atualiza o contexto com EVP_DigestUpdate() passando o contexto, o byte lido e o tamanho do byte
    while (BIO_read(fileBio, &data, 1) > 0)
    {
        EVP_DigestUpdate(mdctx, &data, 1);
    }

    // ---------------------------------------------------------------------------------------------
    // 4: Finalizar o contexto e obter o hash

    // EVP_DigestFinal_ex() é usado para finalizar o contexto do algoritmo de hash
    // EVP_MD_CTX_destroy() é usado para destruir o contexto do algoritmo de hash
    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    EVP_MD_CTX_destroy(mdctx);

    // ---------------------------------------------------------------------------------------------
    // 5: Converter o hash para string

    // hexOut é usado para armazenar o hash em hexadecimal
    // OPENSSL_buf2hexstr() é usado para converter o hash para string
    char *hexOut = OPENSSL_buf2hexstr(md_value, md_len);

    // hexHash é convertido para string
    // OPENSSL_free() é usado para liberar a memória alocada por OPENSSL_buf2hexstr()
    hexHash = std::string(hexOut);
    OPENSSL_free(hexOut);

    // ---------------------------------------------------------------------------------------------
    // 6: Liberar o contexto

    // EVP_cleanup() é usado para liberar o contexto
    EVP_cleanup();

    return hexHash;
}
