#include <stdio.h>

void ConvTemp(){
  double F;
  printf("Insira o a temperatura em Fahrenheit:\n");
  scanf("%lf", &F);
  double C = (5*(F-32))/9;
  printf("%.2lf°F = %.2lf°C\n", F, C);
}

void tabelaFtoC(){
  double F = 50;
  double C;
  while (F <= 150){
    C = (5*(F-32))/9;
    printf("%.2lf°F = %.2lf°C\n", F, C);
    F++;
  }
}

void somaNatural(){
  int n, s = 0, i = 1;
  printf("Informe o numero\n");
  scanf("%d", &n);
  while (i <= n){
    s += i;
    i++;
  }
  printf("A soma dos termos eh = %d\n", s);
}

void somaNaturalFracionada(){
  int n, i = 1;
  double s = 0;
  printf("Informe o numero\n");
  scanf("%d", &n);
  while (i <= n){
    s += 1.0/i;
    i++;
  }
  printf("A soma dos termos fracionados eh = %.2lf\n", s);
}

void conjuntoNumeros(){
  int ni = 0, np = 0, i;
  printf("Informe os numeros\nDigite 0 para encerrar\n");
  do {
    scanf("%d", &i);
    if (i != 0){
      if (i % 2 == 0){
        printf("Eh par\n");
        np++;
      } else {
        printf("Eh impar\n");
        ni++;
      }
    }
  } while (i != 0);
  printf("Numeros pares: %d\n", np);
  printf("Numeros impares: %d\n", ni);
}

int main(){

  int questao;
  printf("Informe a questao a ser resolvida:\n");
  scanf("%d", &questao);
  switch (questao) {
    case 1:
      ConvTemp();
      break;
    case 2:
      tabelaFtoC();
      break;
    case 3:
      somaNatural();
      break;
    case 4:
      somaNaturalFracionada();
      break;
    case 5:
      conjuntoNumeros();
      break;
  }

  return 0;
}
