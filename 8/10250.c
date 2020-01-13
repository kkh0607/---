#include <stdio.h>

int main(){
    
    int n; int final = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int height, room, visitor;
        scanf("%d %d %d", &height, &room, &visitor);
        
        if(visitor%height == 0){
            final = height*100 + visitor/height;
        }
        else{
            final = (visitor%height)*100 + visitor/height + 1;
        }
        
        printf("%d\n", final);
    }
    
    return 0;
    
}

