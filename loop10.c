#include<stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d", &n);
int ok = 1;
for (int i = 2; i < n; i++){
    if (n % i == 0)


{
  ok = 0;
  break;
}
}


if(ok == 1)
    printf("%d is a Prime number", n);
else
    printf("%d is a Composite number", n);
return 0;

}
