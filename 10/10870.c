#include <stdio.h>

int fibo(int n){
    
    if(n >= 2){
        return (fibo(n-1) + fibo(n-2));
    }
    else{
        return n;
    }
}

int main(){
    
    int N;
    scanf("%d", &N);
    
    int fib = fibo(N);
    
    printf("%d\n", fib);
    
    return 0;
}
