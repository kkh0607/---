#include <stdio.h>

int main(){
    
    //get string
    char c[1000001];
    int i = 0;
    int aph[26] = {0};
    int j;
    while(1){
        
        scanf("%c", &c[i]);
        if(c[i] == '\n'){
            break;
        }
        //find accurence
        for(j = 0; j < 26; j++){
            
            if(c[i] == j + 97 || c[i] == j + 65){
                aph[j]++;
            }
            
        }
        i++;
        
    }
    
    //find max
    int max = 0;
    for(j = 0; j< 26; j++){
        
        if(aph[max] < aph[j]){
            max = j;
        }
        
    }
    //find existence of another max
    for(j = max + 1; j < 26; j++){
        
        if(aph[max] == aph[j]){
            max = -2;
        }
        
    }
    
    printf("%c", max + 65);
    
    return 0;
    
}
