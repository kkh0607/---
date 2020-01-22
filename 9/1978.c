#include <stdio.h>

int nondivisible(int num){
    
    if(num == 0 || num == 1){
        return 0;
    }
    else if(num == 2){
        return 1;
    }
    
    for(int i = 2; i< num; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
    
}

int main(){
    
    int n;
    scanf("%d", &n);
    
    int total = 0;
    
    for(int i = 0; i < n; i++){
        int m;
        scanf("%d", &m);
        if(nondivisible(m)){
            total++;
        }
    }
    
    printf("%d\n", total);
    
    return 0;
}
