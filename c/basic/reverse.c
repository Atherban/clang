#include<stdio.h>

int main(){

    int n , sum , r, i;
    printf("Enter value of n :");
    scanf("%d",&n);

    for ( ; n>0; )
    {
        r = n%10;
        sum = sum*10+r;
        n = n%10;
    }

    printf("%d", sum);
 
}