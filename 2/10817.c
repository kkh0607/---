#include <stdio.h>

int main(){
    
    int a,b,c, middle;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if((a >= b && a <= c) || (a <= b && a >= c)){
        middle = a;
    }
    if((b >= a && b <= c) || (b <= a && b >= c)){
        middle = b;
    }
    if((c >= a && c <= b) || (c <= a && c >= b)){
        middle = c;
    }
    
    printf("%d", middle);
    
    return 0;
}
