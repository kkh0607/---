#include <stdio.h>

int main(){
    
    int arr[9];
    
    for(int i = 0; i < 9; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }
    
    int max = 0;
    for(int i = 0; i < 9; i++){
        if(arr[max] < arr[i]){
            max = i;
        }
    }
    
    printf("%d\n%d", arr[max], max + 1);
    
    return 0;
    
}
