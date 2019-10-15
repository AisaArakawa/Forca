#ifndef FORCA_H_INCLUDED
#define FORCA_H_INCLUDED
#ifdef _WIN32
# define CLEAR_SCREEN system ("cls")
#else
# define CLEAR_SCREEN puts("\x1b[H\x1b[2J")
#endif

//Victor Hugo Soares Pereira 17137 Ana Iara Silva Arakawa 18120

struct noSecreto{
    int status;
    char palavra[31];
    char assunto[101];
    struct noSecreto * prox;
};

typedef struct noSecreto NoSecreto;
typedef struct noSorteada NoSorteada;

int geraAleatorio(int maximo);
NoSecreto * inicializaListaSecreta();
NoSecreto * carregaListaArquivo(NoSecreto *l, char nomeArq[255]);
void imprimeListaSecreta(NoSecreto *l);
NoSecreto * inserePalavraSecreta(NoSecreto *l,char word[31],char subject[100]);
NoSecreto * sorteiaPalavra(NoSecreto *l);
int temPalavraNaoUsada(NoSecreto *l);

int tamanhoListaSecreta(NoSecreto *l);


NoSecreto * retornaPalavraPos(NoSecreto *l, int pos);

#endif // FORCA_H_INCLUDED
