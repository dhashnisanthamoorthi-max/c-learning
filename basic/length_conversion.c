#include<stdio.h>
int main()
{
  float km,m,cm,inch,ft;
  printf("Enter the kilometer:");
  scanf("%f",&km);

  m = km*1000;
  cm = m*100;
  inch = cm/2.54;
  ft = inch/12;

  printf("\nKM :%2f",km);
  printf("\nM :%2f",m);
  printf("\nCM :%2f",cm);
  printf("\nIN :%2f",inch);
  printf("\nFT :%2f",ft);

  return 0;
}


