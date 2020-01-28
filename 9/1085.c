#include <stdio.h>

int main(){
    
    int x,y,w,h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    int xw = w - x;
    int yh = h - y;
    
    if(x < xw && x < y && x < yh)
        printf("%d",x);
    else if(y < yh && y < xw)
        printf("%d", y);
    else if(yh < xw)
        printf("%d", yh);
    else
        printf("%d", xw);
    
    return 0;
}
