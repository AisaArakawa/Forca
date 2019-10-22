#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
#include "funcoes.h"

int main(void)
{
    system("cls");
    printf("Jogo da forca\n");
    printf("Criadores: Victor Hugo Soares Pereira 17137\nAna Iara Silva Arakawa 18120\nAntonio Gabriel Cardoso de Rezende Orlandini 18122\n\n");
  /*int i;
  srand(time(NULL));
  printf("%d ",i = rand() % 10);*/


  NoSecreto * lsSecreta = inicializaListaSecreta();
  lsSecreta = carregaListaArquivo(lsSecreta, "D:\\pen drive\\2019\\2º Semestre\\ED\\Jogo da forca\\palavras.dat");
  imprimeListaSecreta(lsSecreta);


  return 0;
}
