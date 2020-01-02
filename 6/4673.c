#include <stdio.h>

int d(int x){
    
    int x1 = x%10;
    int x10 = x%100 / 10;
    int x100 = x%1000 /100;
    int x1000 = x%10000 /1000;
    
    return x + x1 + x10 + x100 + x1000;
    
}

int main(){
    
    int arr[10001] = {0};
    int num;
    
    for(int i = 1; i <= 10000; i++){
        
        num = d(i);
        if(num <= 10000){
            
            arr[num] = 1;
            
        }
        
    }
    
    for(int i = 1; i <= 10000; i++){
        
        if(arr[i] == 0){
            
            printf("%d\n", i);
            
        }
        
    }
   
    return 0;
}
