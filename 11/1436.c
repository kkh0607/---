#include <stdio.h>

int main(){
    
    int N; int title = 0; int count = 0;
    scanf("%d", &N);
    
    while(++title){
        int copy, find;
        copy = title;
        find = 0;
        while(copy){
            if(copy%1000 == 666){
                find = 1;
            }
            copy = copy / 10;
        }
        
        if(find == 1){
            count++;
            if(count == N){
                break;
            }
        }
        
    }
    
    printf("%d\n", title);
    
    return 0;
}
