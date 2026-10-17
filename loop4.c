#include<stdio.h>
int main (){
   int sum = 0, N, i;
   printf("Enter a number N: ");
   scanf("%d", &N);
   for(i = 1; i<=N; i++)
{
    if(i % 2 == 0)
        {
           sum+= i;
    }
}
printf("Sum of even numbers = %d", sum);
return 0;
}
