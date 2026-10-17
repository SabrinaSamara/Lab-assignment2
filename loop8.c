#include<stdio.h>
int main(){
int N, digit, sum = 0;
printf("Enter a number: ");
scanf("%d", &N);
while (N != 0)
{
 digit = N % 10;
 N = N / 10;
 sum += digit;

}
printf("Sum of a digit %d", sum);
return 0;
}
