#include<stdio.h>

int main(){

    int n , m , i;
    printf("Enter value of n :");
    scanf("%d",&n);
    printf("Enter value of m :");
    scanf("%d",&m);

    if (n >m){
        for( i = n ; i<=0 ; i--){
            printf("%d",i);
        }
    }
    else if(m > n){
        for ( i = 1 ; i<= m ; i++){
            printf("%d",i);
        }
    }
    else{
        printf("Equal values");
    }
    return 0;
}