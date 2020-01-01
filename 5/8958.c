#include <stdio.h>

int main(){
    
    int num;
    scanf("%d", &num);
    getchar();
    int a[num];
    
    for(int i =0; i < num; i++){
        
        char arr[81];
        int j = 0; int count = 0; int total = 0;
        while(j < 80){
            
            scanf("%c", &arr[j]);
            if(arr[j] == '\n')
                break;
            else if(arr[j] == 'O'){
                count++;
                total = total + count;
            }
            else if(arr[j] == 'X'){
                count = 0;
            }
            j++;
        }
        a[i] = total;
    }
    
    for(int i = 0; i < num; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}
