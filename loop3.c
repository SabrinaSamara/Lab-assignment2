#include<stdio.h>
int main(){
   int sum = 0, N, i;
   printf("Enter a number N: ");
   scanf("%d", &N);
   for(i = 1; i<= N; i++)
{
    sum += i;
}
printf("Sum = %d", sum);
return 0;

}
