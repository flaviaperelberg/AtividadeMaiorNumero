#include <stdio.h>

int main(void){
  
  int cont, numero, maior=0, menor=1;
  
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
