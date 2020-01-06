#include <stdio.h>

int main(){
    
    char num[105]; int i = 0;
    
    while(1){
        
        scanf("%c", &num[i]);
        if(num[i] == '\n'){
            break;
        }
        i++;
        
    }
    
    int count = 0;
    for(int j = 0; j < i; j++){
        if(num[j] == 'c' && (num[j+1] == '=' || num[j + 1] == '-')){
            count++;
            j++;
        }
        else if(num[j] == 'd' && num[j + 1] == '-'){
            count++;
            j++;
        }
        else if(num[j] == 'd' && num[j + 1] == 'z' && num[j + 2] == '='){
            count++;
            j = j + 2;
        }
        else if((num[j] == 'l' || num[j] == 'n') && num[j+1] == 'j'){
            count++;
            j++;
        }
        else if((num[j] == 's' || (num[j-1] != 'd' && num[j] == 'z')) && num[j+1] == '='){
            count++;
            j++;
        }
        else{
            count++;
        }
        
    }
    printf("%d\n", count);
    
    return 0;
    
}
