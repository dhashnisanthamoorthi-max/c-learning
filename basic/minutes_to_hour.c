#include<stdio.h>
#include<conio.h>

int main(){
   int minutes, hours, rem;

   printf("Enter minutes:");
   scanf("%d", &minutes);

   hours = minutes/60;
   printf("Perfect hours:%d\n",hours);

   rem = minutes%60;
   printf("\nRemaining minutes:%d\n",rem);

   return 0;
}
