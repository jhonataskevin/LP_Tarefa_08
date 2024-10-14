#include <stdio.h>
 
int main() {
 
    int cod, qde;
    float preco,  total;
    
    scanf("%d %d %f", &cod, &qde, &preco);
    total = qde * preco;
    
    scanf("%d %d %f", &cod, &qde, &preco);
    total = total + (qde * preco);
    
    printf("VALOR A PAGAR: R$ %.2f", total);
    printf("\n");
  
    return 0;
}
