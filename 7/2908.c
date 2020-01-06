#include <stdio.h>

int main(){
    
    //two numbers
    char a[8]; int i = 0;
    
    while(1){
        
        scanf("%c", &a[i]);
        if(a[i] == '\n'){
            break;
        }
        i++;
        
    }
    
    int one, two;
    //flip to int
    one = (a[2] - 48)*100 + (a[1] - 48)*10 + (a[0] - 48);
    two = (a[6] - 48)*100 + (a[5] - 48)*10 + (a[4] - 48);
    
    if(one > two){
        printf("%d", one);
    }
    else{
        printf("%d", two);
    }
    
    return 0;
    
}
