#include <stdio.h>

int main(){
    int arr[246913] = {0}; arr[0] = 1; arr[1] = 1;
    
    for(int i = 2; i <= 246912; i++){
        for(int j = 2; j * i <= 246912; j++){
            arr[i*j] = 1;
        }
    }
    int n;
    scanf("%d", &n);
    while(n != 0){
        int total = 0;
        for(int i = n+1; i <= 2*n; i++){
            if(!arr[i])
                total++;
        }
        printf("%d\n", total);
        scanf("%d", &n);
    }
    
    return 0;
}
