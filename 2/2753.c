#include <stdio.h>

int main(){
	
    int a;
    scanf("%d", &a);
    
    if((a%4 == 0 && a%100 != 0) || a%400 == 0){ // 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때 이다
        printf("1");
    }
    else{ printf("0"); }
    
    return 0;
}
