#include <stdio.h>

	int main()
	{
	  float nota1,nota2,nota3,resultado;
	  printf("Nota 1: ");
	  scanf("%f", &nota1);
	  printf("Nota 2: ");
	  scanf("%f", &nota2);
	  printf("Nota3: ");
	  scanf("%f", &nota3);
	  resultado=(nota1+nota2+nota3)/3;
	  if (resultado<6)
	  {
	  printf("Que pena, reprovado com media: %.2f", resultado);
	  }
	  else {
	  printf("Parabens, voce passou com media: %.2f", resultado);
	  }
	  return 0;
	}
