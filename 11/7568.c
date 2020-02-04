#include <stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);
    int height[N];
    int weight[N];
    
    for(int i = 0; i < N; i++){
        scanf("%d %d", &height[i], &weight[i]);
    }
    
    for(int i = 0; i < N; i++){
        int count = 1;
        for(int j = 0; j <N; j++){
            if(i != j){
                if(height[i] < height[j] && weight[i] < weight[j]){
                    count++;
                }
            }
        }
        printf("%d ", count);
    }
    
    
    return 0;
}
