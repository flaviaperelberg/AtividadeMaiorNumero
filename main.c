#include <stdio.h>

int main(void) {
  int cont, numero, maior=0;
  for(cont=1; cont<=5; cont++){
    printf("Digite um número: \n");
    scanf("%d", &numero);

    if(numero>maior){
      maior=numero;
    }
    
  }
printf("O maior número é o: %d", maior);
}