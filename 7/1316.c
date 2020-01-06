#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    getchar();
    char list[101];
    
    int count = n;
    
    for(int j = 0; j < n; j++){
        int i = 0;
        while(1){
            scanf("%c", &list[i]);
            if(list[i] == '\n'){
                break;
            }
            i++;
        }
        int aph[26] = {0}; int check = 0;
        for(int k = 0; k < i; k++){
            if((aph[list[k] - 97] == 0 || aph[list[k] - 97] == 1) && list[k] != list[k+1]){
                aph[list[k] - 97] = 1;
            }
            if(list[k] != list[k+1] && aph[list[k+1] - 97]==1){
                aph[list[k+1] - 97] = -1;
                check = 1;
            }
        }
        count = count - check;
    }
    
    printf("%d", count);
   
    return 0;
}
