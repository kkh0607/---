#include <stdio.h>

//counting sort when the range of number are small enough
int main(){
    
    int N; int arr[10001] = {0};
    scanf("%d", &N);
    
    int index;
    for(int i = 0; i < N; i++){
        scanf("%d", &index);
        arr[index]++;
    }
    
    for(int i = 0; i < 10001; i++){
        while(arr[i]){
            printf("%d\n", i);
            arr[i]--;
        }
    }
    
    return 0;
}
