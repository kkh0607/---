#include <stdio.h>

int main(){
    
    int a;
    scanf("%d", &a);
    int arr[a];
    
    for(int i = 0; i < a; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }
    
    int min = arr[0];
    int max = arr[0];
    
    for(int j = 0; j<a; j++){
        if(max < arr[j]){ max = arr[j]; }
        if(min > arr[j]){ min = arr[j]; }
    }
    
    printf("%d %d", min, max);
    
    return 0;
    
}
