#include <stdio.h>

int main(){
    
    int num, num1, num2, sum, newnum, copy, count;

    scanf("%d", &num);
    copy = num;
    count = 0;
    
    while(1){
        
        if(copy < 10)
            num1 = 0;
        else
            num1 = copy/10;
    
        num2 = copy - num1*10;
        sum = num1 + num2;
        newnum = num2*10 + (sum - (sum/10)*10);
        count++;
        
        if(newnum == num){
            break;
        }
        
        copy = newnum;
        
    }
    
    printf("%d", count);
    return 0;
    
}
