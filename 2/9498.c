#include <stdio.h>

int main(){
	
    int a;
    scanf("%d", &a);
    
    if(89 < a && a <= 100){
        printf("A");
    }
    else if(79< a && a <=89){
        printf("B");
    }
    else if(69< a&& a<=79){
        printf("C");
    }
    else if(59 < a&& a <=69){ 
        printf("D");
    }
    else{
        printf("F");
    }
    
    return 0;
}
