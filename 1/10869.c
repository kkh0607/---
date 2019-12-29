#include <stdio.h>

int main(){
    
    int a,b;
    scanf("%d %d", &a, &b);
    int c,d,e,f,g;
    c = a + b;
    d = a - b;
    e = a*b;
    f = a/b;
    g = a%b;
    
    printf("%d\n%d\n%d\n%d\n%d\n", c,d,e,f,g);
    
    return 0;
}