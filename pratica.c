#include <stdio.h>

int main(void){
  int i, b, n;
  printf("Digite um número: ");
  scanf("%d", &n);  
  for (i=1; i<=n; i++){
    for (b=1; b<=n -i; b++){
      printf(" ");
    }
    for (b=1; b<=i; b++){
      printf("*");
      
    }
    
      printf("  ");
    
   
    for (b=1; b<=i; b++){
     printf("*");

  }
    printf("\n");
    
  }

  return 0;
}