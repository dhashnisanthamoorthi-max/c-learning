#include<stdio.h>

int main()
{
  int m1,m2,m3,m4,m5,total;
  float avg;
  printf("Enter five marks:");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

  total = m1+m2+m3+m4+m5;
  avg = total/5.0 //5.0 to ensure float division

  printf("\nTotal Marks : %d",total);
  printf("\nAverage Marks :%f",avg);

  return 0;
}
