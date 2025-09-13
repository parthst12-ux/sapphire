#include<stdio.h>
int main ()
{
double population = 100000;
int year;
printf("population growth upto 10 years:\n");

  for(year = 1; year <= 10; year++){
    population = population * 1.1;
    printf("Year %d: %.0f\n",year,population);
  }
return 0;
}