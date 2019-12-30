#include <stdio.h>

int main(){
	
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    if(b < 45){
        if(a == 0){
            a = 24;
        }
        a = a - 1;
        b = b + 60 - 45;
    }
    else{
        b = b - 45;
    }
    
    printf("%d %d", a, b);
    
    return 0;
}
