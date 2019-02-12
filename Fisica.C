#include <stdio.h>
#include <stdlib.h>

int main()
{
  float i, k=1000, e, rt=0, *r, *v, *p;
  int j, temp;
  
  //system("color 40");

  printf("Ingrese el valor de total de voltaje (E): ");
  scanf("%f", &e);
  printf("¿Cuantas resistencias tiene el circuito?\n");
  scanf("%d", &temp);

  r=(float*)malloc(temp*sizeof(float));
  v=(float*)malloc(temp*sizeof(float));
  p=(float*)malloc(temp*sizeof(float));

  for(j=0; j<temp; j++ )
  {
    printf("Ingrese el valor de R%d: ", j+1);
    scanf("%f", &r[j]);
    
    r[j]*=k;
    
    rt+=r[j];
  }

  //Hacemos todos los calculos
  printf("rt= %f", rt);
  i=e/rt;

  for(j=0; j<temp; j++)
  {
    v[j]=r[j]*i;
    p[j]=v[j]*i;
  }

  printf("****************************************\n");
  printf("************  RESULTADOS  **************\n");
  printf("****************************************\n\n");

  printf("Vt: %f v\n", e);
  printf("Rt: %f ohm\n", rt);
  printf("I: %f A\n", i);

  for(j=0; j<temp; j++)
  {
    printf("V%d= %f v\n",j+1,v[j]);
  }

  for(j=0; j<temp; j++)
  {
    printf("P%d= %f w\n",j+1,p[j]);
  }

  free(r);
  free(v);
  free(p);

  return 0;
}
