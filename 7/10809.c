#include <stdio.h>

int main(){
    
    char c[101];
    int aph[26];
    int j = 0; int i = 0;
    
    for(j = 0; j < 26; j++){ //set every value as -1
        
        aph[j] = -1;
        
    }
    
    while(1){ //find first place alphabet appear and record
        
        scanf("%c", &c[i]);
        if(c[i] == '\n'){
            break;
        }
        for(j = 0; j < 26; j++){
            
            if(c[i] == j+97 && aph[j] == -1){
                
                aph[j] = i;
                
            }
            
        }
        i++;
        
    }
    
    for(j = 0; j < 26; j++){
        
        printf("%d ", aph[j]);
        
    }
    
    return 0;
}
