#include <stdio.h>

int main(){
    
    int t; int arr[10001] = {0}; arr[0] = 1; arr[1] = 1;
    
    for(int i = 2; i <= 10000; i++){
        for(int j = 2; j*i <= 10000; j++){
            arr[i*j] = 1;
        }
    }
    
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        
        for(int j = n/2; j > 0; j--){
            
            if(arr[j] == 0 && arr[n-j] == 0){
                printf("%d %d\n", j, n-j);
                break;
            }
            
        }
        
    }
    
    return 0;
}
