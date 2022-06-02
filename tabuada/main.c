#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabuada, num, result;
    num = 1;
    tabuada = 2;
    while (num<=1000)
{
result=tabuada*num;
 printf("%d x %d = %d \n", tabuada, num, result);
 num=num+1;
}
    return 0;
}
