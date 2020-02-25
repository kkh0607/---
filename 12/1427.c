#include <stdio.h>
#include <string.h>

int main(){
    
    char N[12];
    scanf("%s", N);
    
    int i = strlen(N);
    
    int temp;
    
    //bubble sort
    for(int j = 0; j < i; j++){
        for(int k = 0; k < i - (j +1); k++){
            if(N[k] < N[k+1]){
                temp = N[k];
                N[k] = N[k+1];
                N[k+1] = temp;
            }
        }
    }
    
    printf("%s", N);
        
        
    return 0;
}
