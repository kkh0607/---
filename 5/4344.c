#include <stdio.h>

int main(){
    
    int casen;
    scanf("%d", &casen);
    
    for(int i = 0; i < casen; i++){
        
        int n; float total = 0.0; double count = 0;
        scanf("%d", &n);
        int arr[n];
        
        for(int j = 0; j < n; j++){
            
            scanf("%d", &arr[j]);
            total = total + arr[j];
            
        }
        
        for(int j = 0; j < n; j++){
            
            if(arr[j]>total/n)
                count++;
            
        }
        
        printf("%.3f%%\n", count/n * 100);
        
    }
    
    return 0;
}
