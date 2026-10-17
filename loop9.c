#include<stdio.h>
int main(){
int n, fact = 1;
printf("Enter a positive Number: ");
scanf("%d", &n);
for(int i = 1; i<=n; i++)
{
    fact *= i;
}
printf("%d! = %lld\n", n,fact);
return 0;

}
