#include <stdio.h>

int main() {

  float valor_hora_trabalhada = 150.0f;
  int total_horas_trabalhadas = 200;
  

 const float IR = 0.25f;
 const float INSS = 0.11f;

  float salario_bruto = valor_hora_trabalhada * total_horas_trabalhadas;
  float valor_ir = salario_bruto * IR;
  float valor_inss = salario_bruto * INSS;
  float salario_liquido = salario_bruto - valor_ir - valor_inss;

  printf("\x1b[35m------------------------------\n");
  printf("            CONTRACHEQUE      \n");
  printf("------------------------------\n\x1b[0m");
  printf("\x1b[1mSALARIO BRUTO...: %8.2f\n", salario_bruto);
  printf("VALOR IR........:R$ %8.2f\n", valor_ir);
  printf("VALOR INSS......:R$ %8.2f\n", valor_inss);
  printf("VALOR LIQUIDO...:R$ %8.2f\n\x1b[0m", salario_liquido);

  return 0;
}