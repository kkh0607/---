#include <stdio.h>

int main(){
    
    long long int num;
    scanf("%lld", &num); long long int total = 1; long long int i = 0;
    
    for(i = 1; num > total; i++){
        
        total = total + 6*i;
        
    }
    
    printf("%lld\n", i);
    
    return 0;
    
}
