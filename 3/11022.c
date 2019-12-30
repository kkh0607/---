#include <stdio.h>

int main(){
    
    int num;
    
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        int a,b;
        scanf("%d", &a);
        scanf("%d", &b);
        printf("Case #%d: %d + %d = %d\n", i ,a ,b ,a + b);
    }

    return 0;
}
