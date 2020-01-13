#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    
    int i = ( c-b -1) / (a-b) + 1;
    
    printf("%d\n", i);
    
    return 0;
}
