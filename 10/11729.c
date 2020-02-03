#include <stdio.h>

void hanoi(int n, int first, int second, int third){
    if(n == 1){
        printf("%d %d\n", first, third);
    }
    else{
        hanoi(n-1, first, third, second);
        printf("%d %d\n", first, third);
        hanoi(n-1, second, first, third);
    }
}

int main(){
    
    int n;
    scanf("%d", &n);
    
    int total = 1;
    for(int i = 0; i < n-1; i++){
        total = total*2 + 1;
    }
    
    printf("%d\n", total);
    hanoi(n,1,2,3);
    
    
    return 0;
}

