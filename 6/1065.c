#include <stdio.h>

int han(int x){
    
    if(x < 100){
        return 1;
    }
    else if(x == 1000){
        return 0;
    }
    
    int x1 = x%1000 / 100;
    int x2 = x%100 / 10;
    int x3 = x%10;
    
    if(x1 - x2 == x2 - x3){ return 1;}
    else{ return 0; }
    
}

int main(){
    
    int num; int total = 0;
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        
        total = total + han(i);
        
    }
    
    printf("%d", total);
    
    return 0;
}
