#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main (){

char nome[50], c;
int i, q=0;

printf ("Informe um nome: ");
gets(nome);
fflush(stdin);
printf("\nInforme uma letra: ");
scanf("%c",&c);

for(i=0;i<strlen(nome);i++){
if(nome[i]==c){
q+=1;
}
}
printf("A letra %c se repete: %i", c, q);
}
  

  
  

