#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int calc, i, j; /*variável de controle do loop*/
for(i = 1; i <= 10; i++)
{
for(j=1; j<=10; j++)
{
 calc = i*j;
 printf("%d x %d = %d \n", i, j, calc);
}

}
return(0);
}
