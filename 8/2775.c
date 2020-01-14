#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    int total[15][15] = {0};
    
    for(int j = 1; j <= 14; j++){
        total[0][j] = j;
        total[j][1] = 1;
    }
    
    for(int j = 1; j <= 14; j++){
        for(int h = 2; h <= 14; h++){
            total[j][h] = total[j-1][h] + total[j][h-1];
        }
    }
    
    for(int i = 0; i < n; i++){
        int cheng, ho;
        scanf("%d", &cheng);
        scanf("%d", &ho);
        
        printf("%d\n", total[cheng][ho]);
        
    }
    
    return 0;
}

