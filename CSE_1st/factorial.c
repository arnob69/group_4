#include<stdio.h>
int main(){
    int n , fact=1;
    printf("Enter an Integer : ");
    scanf("%d",&n);
    while(n>=1){
        fact=fact*n;
        --n;
    }
    printf("The factorial of %d is %d",n, fact);

    return 0;
}