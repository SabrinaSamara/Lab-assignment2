#include<stdio.h>
int main(){
int n, rev = 0;
printf("Enter a number: ");
scanf("%d", &n);
while(n > 0){
    int d = n % 10;
    rev *= 10;
    rev += d;
    n /= 10;
}
printf("reversed number = %d", rev);
return 0;
}
