#include <stdio.h>

int main(){
    
    long long int a,b,c;
    
    scanf("%lld %lld %lld", &a, &b, &c);
    
    if(b < c){
        int ans = (a/(c-b));
        printf("%d", ans + 1);
    }
    else{
        printf("-1");
    }
  
    return 0;
    
}
