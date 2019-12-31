#include <stdio.h>

int main(){
    
    int a,b,c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    int result = a * b * c;
    int digit[10] = {0};
    
    while(result>0){
        
        digit[result%10] = digit[result%10] + 1;
        result = result/10;
        
    }
    
    for(int i = 0; i < 10; i++){
        
        printf("%d\n", digit[i]);
        
    }
    
    return 0;
}
