#include <stdio.h>

int main(){
    
    char num[16]; int i = 0;
    
    while(1){
        
        scanf("%c", &num[i]);
        if(num[i] == '\n'){
            break;
        }
        i++;
        
    }
    
    int j; int time = 0;
    for(j = 0; j < i; j++){
        
        if(num[j] >= 65 && num[j] <= 67){
            time = time + 3;
        }
        else if(num[j] >= 68 && num[j] <= 70){
            time = time + 4;
        }
        else if(num[j] >= 71 && num[j] <= 73){
            time = time + 5;
        }
        else if(num[j] >= 74 && num[j] <= 76){
            time = time + 6;
        }
        else if(num[j] >= 77 && num[j] <= 79){
            time = time + 7;
        }
        else if(num[j] >= 80 && num[j] <= 83){
            time = time + 8;
        }
        else if(num[j] >= 84 && num[j] <= 86){
            time = time + 9;
        }
        else if(num[j] >= 87 && num[j] <= 90){
            time = time + 10;
        }
    }
    printf("%d", time);
    
    return 0;
    
}
