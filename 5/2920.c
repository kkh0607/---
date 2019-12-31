#include <stdio.h>

int main(){
    
    int arr[8];
    
    for(int i = 0; i < 8; i++){
        
        int num;
        scanf("%d", &num);
        arr[i] = num;
        
    }
    int type = 0;
    for(int j = 0; j < 7; j++){
        
        if(arr[j]<arr[j+1]){
            type++;
        }
        else{
            type--;
        }
    }
    
    if(type == 7){printf("ascending");}
    else if(type == -7){printf("descending");}
    else{printf("mixed");}
    
    return 0;
}
