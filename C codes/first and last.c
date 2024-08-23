#include<stdio.h>
void main(){
    int n;
    scanf("%d",n);
    int temp=n;
    while(n>=10){
        n=n/10;
    }
    printf("first digit of a number %d\n",n);
    printf("last digit of a number %d",temp%10);
}
