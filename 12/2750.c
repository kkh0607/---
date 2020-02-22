#include <stdio.h>

int main(){
    
    int n;
    int arr[1001];
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    int change;
    
    //bubble sort
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                change = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = change;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
