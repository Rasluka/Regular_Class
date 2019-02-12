#include <stdio.h>
#include <stdlib.h>

#define RES 3

int main()
{
  float i, e, rt=0, r[RES], v[RES], p[RES];
  int j, temp;

  printf("Ingrese el valor de total de voltaje (E): ");
  scanf("%f", &e);

  for(j=0; j<RES-1; j++ )
  {
    printf("Ingrese el valor de R%d: ", j+1);
    scanf("%f", &r[j]);
    rt+=r[j];
  }

  //Hacemos todos los calculos
  i=e/rt;

  for(j=0; j<temp; j++)
  {
    v[j]=r[j]*i;
    p[j]=v[j]*i;
  }

  printf("****************************************\n");
  printf("************  RESULTADOS  **************\n");
  printf("****************************************\n\n");

  printf("Vt: %.2f\n", e);
  printf("Rt: %.2f\n", rt);
  printf("I: %.2f\n", i);

  for(j=0; j<temp; j++)
  {
    printf("V%d= %.2f\n",j+1,v[j]);
  }

  for(j=0; j<temp; j++)
  {
    printf("P%d= %.2f\n",j+1,p[j]);
  }

  return 0;
}
