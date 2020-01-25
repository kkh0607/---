#include <stdio.h>

int thtu(int n){
    
    if(n == 0 || n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    
    for(int i = 2; i< n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
    
}

int main(){
    
    int M, N;
    int total = 0;
    int count = 0;
    int small = 10001;
    
    scanf("%d", &M);
    scanf("%d", &N);
    
    for(int i = M; i <= N; i++){
        if(thtu(i)){
            count++;
            total = total + i;
            if(small > i){
                small = i;
            }
        }
    }
    
    if(count == 0){
        printf("-1\n");
    }
    else{
        printf("%d\n%d\n", total, small);
    }
    
    
    return 0;
}
