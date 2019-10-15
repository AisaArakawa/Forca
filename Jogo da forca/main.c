#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"
#include <string.h>

void copyright(){
    system("clear");
    printf("=============================================================\n\n");
    printf("JOGO DA FORCA\n");
    printf("Desenvolvido por: \n\tVictor Hugo Soares Pereira 17137\n\tAna Iara Silva Arakawa 18120\n\t");
    printf("\tXXXXX - NNNNNNNNNNNNNNNNNNN\n");
    printf("=============================================================\n\n");
}

int limpaTela()
{
puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
return 0;
}

int main(int argc, char *argv[])
{
    /*int i;
    srand(time(NULL));
    printf("%d ",i = rand() % 10);*/

    NoSecreto * lsSecreta = inicializaListaSecreta();
    char fNameArq[255];
    NoSecreto * sorteada;
    int posSorteada=0;
    int tamanhoLista=0;
    imprimeListaSecreta(lsSecreta);

    strcpy(fNameArq,"palavras.dat");

    if(argc>1){
      strcpy(fNameArq,argv[1]);
    }

    printf("Arquivo de dados: %s\n\n",fNameArq);

    copyright();

    lsSecreta = carregaListaArquivo(lsSecreta,fNameArq);
    imprimeListaSecreta(lsSecreta);
    tamanhoLista = tamanhoListaSecreta(lsSecreta);

    do{
        CLEAR_SCREEN;
        imprimeListaSecreta(lsSecreta);

        sorteada= sorteiaPalavra(lsSecreta);
        if(sorteada!=NULL){
            printf("%s\n", sorteada->palavra);
        }else{
            printf("Nao tem palavra disponivel!\n\n");
        }
    }while(getchar()!='f');
    return 0;
}
