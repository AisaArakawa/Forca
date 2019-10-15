#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED
//Victor Hugo Soares Pereira 17137 Ana Iara Silva Arakawa 18120

typedef struct noSecreto NoSecreto;

NoSecreto * inicializaListaSecreta();
NoSecreto * carregaListaArquivo(NoSecreto * l, char nomeArq[255]);
void imprimeListaSecreta(NoSecreto *l);

NoSecreto * inserePalavraSecreta(NoSecreto *l, char word[31], char subject[100]);

#endif // FUNCOES_H_INCLUDED
