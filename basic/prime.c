#include<stdio.h>

int main(){

    int n , i , res;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i = 2 ; i < n ; i++){
        if(n%i==0){
            res++;
            break;
        }
    }
    if (res == 0)
    {
        printf("Number is prime");
    }
    else{
        printf("Number is not prime");
    }
}