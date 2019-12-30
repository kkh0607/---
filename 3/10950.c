#include <stdio.h>

int main(){
    
    int round;
    
    scanf("%d", &round);
    
    for(int i = 0; i < round; i++){
        int a,b;
        scanf("%d", &a);
        scanf("%d", &b);
        
        printf("%d\n", a+b);
    }

    return 0;
}
