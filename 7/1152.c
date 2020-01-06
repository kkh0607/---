#include <stdio.h>

int main(){
    
    int i = 0; int count = 0;
    char arr[1000002];
    
    while(1){
        
        scanf("%c", &arr[i]);
        if(arr[i] == '\n'){
            break;
        }
        if(i != 0 && arr[i-1] == ' '){
            count++;
        }
        if(i == 0 && arr[i] == ' '){
            count --;
        }
        i++;
        
    }
    
    if(arr[i] == ' '){ count--;}
    
    printf("%d", count + 1);
    
    return 0;
}
