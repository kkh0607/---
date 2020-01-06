#include <stdio.h>

int main(){
    
    int n;int i; int j; int k;
    scanf("%d", &n); //number of cases
    
    for(i = 0; i < n; i++){
        
        int R;
        scanf("%d", &R);// number of repeats
        getchar();
        
        char S[21]; k = 0;
        while(1){
            scanf("%c", &S[k]); //characters
            if(S[k] == '\n'){
                break;
            }
            for(j = 0; j < R; j++){ //print for repeats
                
                printf("%c",S[k]);
                
            }
            k++;
        }
        printf("\n");
    }
    
    return 0;
}
