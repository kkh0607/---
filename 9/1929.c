#include <stdio.h>

//to save time; need an algorithm
int main(){
    
    int arr[1000001] = {0,};
    
    int M,N;
    
    scanf("%d %d", &M, &N);
    arr[1] = 1; arr[0] = 1;
    
    for(int i = 2; i <= N; i++){
        for(int j = 2; j * i <= N; j++){
            arr[j*i] = 1;
        }
    }
    
    for(int i = M; i <= N; i++){
        if(!arr[i]){
            printf("%d\n",i);
        }
    }
    
    return 0;
}
