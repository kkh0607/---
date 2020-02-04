#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    int m = 0; int copy = n;
    while(copy){
        copy = copy/10;
        m++;
    }
    
    int start = n - m*9;
    
    for(int i = start; i<n; i++){
        int copy1 = i;int total = i;
        for(int j = 0; j < m; j++){
            total = total + copy1%10;
            copy1 = copy1/10;
        }
        if(total == n){
            printf("%d\n", i);
            break;
        }
        if(total != n && i == n-1){
            printf("0\n");
        }
    }
    
    return 0;
}
