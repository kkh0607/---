#include <stdio.h>

//recursive function factorial
int factorial(int n){
    if(n != 0){
        return n * factorial(n-1);
    }
    else{
        return 1;
    }
}


int main(){
    
    int N;
    scanf("%d", &N);
    
    int fac = factorial(N);
    
    printf("%d\n", fac);
    
    return 0;
}

