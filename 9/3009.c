#include <stdio.h>

int main(){
    
    int w[4]; int h[4];
    
    for(int i = 0; i < 3; i++){
        scanf("%d %d", &w[i], &h[i]);
    }
    
    if(w[0] == w[1])
        w[3] = w[2];
    else if(w[0] == w[2])
        w[3] = w[1];
    else
        w[3] = w[0];
        
    if(h[0] == h[1])
        h[3] = h[2];
    else if(h[0] == h[2])
        h[3] = h[1];
    else
        h[3] = h[0];
    
    printf("%d %d", w[3], h[3]);
    
    return 0;
}
