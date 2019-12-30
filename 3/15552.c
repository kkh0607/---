#include <stdio.h>

int main(){
    
    int num = 0;
    
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++){
        int a,b;
        scanf("%d", &a);
        scanf("%d", &b);
        printf("%d\n", a + b);
    }

    return 0;
}
