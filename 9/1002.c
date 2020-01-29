#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int t;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++){
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        
        double d = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
        
        if(d < r1 + r2 && d > abs(r1 - r2)){
            printf("2\n");
        }
        else if(d > r1 + r2 || (d == 0 && r1 != r2) || d < abs(r1 - r2)){
            printf("0\n");
        }
        else if((d == abs(r1 - r2) && d != 0) || d == r1+r2){
            printf("1\n");
        }
        else if(d == 0 && r1 == r2){
            printf("-1\n");
        }
        
    }
    
    return 0;
}

