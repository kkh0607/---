#include <stdio.h>

int main(){
    
    int m; int total = 0;
    scanf("%d", &m); getchar();
    
    for(int i = 0; i < m; i++){
        char n;
        scanf("%c",&n);
        total = total + (n - 48);
    }
    
    printf("%d", total);
    
    return 0;
    
}
