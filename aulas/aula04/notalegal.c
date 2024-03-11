#include <stdio.h>

int main() {
 printf("-------------------- \n");
 printf("     NOTA LEGAL      \n");
 printf("-------------------- \n");
 printf("ITEM    QTD    PRECO \n");
 printf("Banana    3     2.30 \n");
 printf("maçã      5     1.50 \n");

  char item[31] = "banana"; 
  int qtde = 1;
  float preco = 1.5f;

printf("%-1s %04i %8f \n", item, qtde, preco);

  char item2[31] = "maca";
  qtde = 3;
  preco = 20.0f;

  printf("-------------------------\n");
  printf("TOTAL        %3f\n", 3.80f);
  return 0;
}