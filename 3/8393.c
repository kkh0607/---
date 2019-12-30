#include <stdio.h>

int main(){
    
    int num, res = 0;
    
    scanf("%d", &num);
    
    for(int i = 0; i <= num; i++){
        res = res + i;
    }
    
    printf("%d", res);

    return 0;
}
