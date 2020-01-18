#include <stdio.h>

long long plus(long long n){
    return (n*(n+1))/2;
}

long long steps(long long n){
    
    long long distance = 0;
    
    if(n < 3) {return n;}
    
    if(n%2==0){
        distance = plus(n/2)*2;
    }
    else{
        distance = plus((n-1)/2)*2+((n-1)/2)+1;
    }
    
    return distance;
    
}

int main(){
    
    long long a, b;
    long long distance = 0;
    long long count = 0;
    
    int testcase;
    scanf("%d", &testcase);
    
    for(int i = 0; i<testcase; i++){
        count = 1;
        scanf("%lld %lld", &a, &b);
        distance = b - a;
        
        while(distance > steps(count)){
            count++;
        }
        
        printf("%lld\n", count);
        
        
    }
    
    return 0;
}

