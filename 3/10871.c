#include <stdio.h>

int main(){
    
    int num, threshold;
    
    scanf("%d", &num);
    scanf("%d", &threshold);
    
    for(int i = 0; i < num; i++){
        int a;
        scanf("%d", &a);
        if(a < threshold){
            printf("%d ", a);
        }
    }

    return 0;
}
