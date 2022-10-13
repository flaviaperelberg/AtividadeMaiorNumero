#include <stdio.h>

int main(void){
  
  int cont, numero, maior, menor;

  printf("Digite um número:\n");
  scanf("%d", &numero);
  maior=numero;
  menor=numero;
  
  for(cont=1; cont<=5; cont++){
    printf("Digite um número:\n");
    scanf("%d", &numero);
    
    if(numero>maior){
      maior=numero;
    }
    if(numero<menor){
      menor=numero;
    }
  }
  
printf("O maior número é: %d \n", maior);
printf("O menor número é: %d", menor);
  
}