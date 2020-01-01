#include <stdio.h>

int main(){
    
    int arr[42] = {0};
    int count = 0;
    
    for(int i = 0; i < 10; i++){
        int input;
        scanf("%d", &input);
        arr[input%42]++;
    }
    
    for(int j = 0; j < 42; j++){
        
        if(arr[j] != 0)
            count++;
    
    }
    
    printf("%d", count);
    
    return 0;
}
