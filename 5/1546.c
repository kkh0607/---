#include <stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);
    int scorelist[N];
    double sum = 0;
    
    double max = 0;
    for(int i = 0; i < N; i++){
        
        int num;
        scanf("%d", &num);
        scorelist[i] = num;
        if(max < num)
            max = num;
        
    }
    
    for(int j = 0; j < N; j++){
        
        sum = sum + scorelist[j] / max * 100.0;
        
    }
    
    printf("%g", sum/N);
    
    return 0;
    
}
