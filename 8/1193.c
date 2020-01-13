#include <stdio.h>

int main(){
    
    long long int n;
    scanf("%lld", &n);
    long long int de = 1;
    long long int no = 1;
    
    while(n>1){
        
        if(de == 1 && no%2 == 1){
            no++;n--;
            for(int i = no; i > 1; i--){
                if(n<2){
                    break;
                }
                de++;
                no--;
                n--;
            }
        }
        else if(no == 1 && de%2 == 0){
            de++;n--;
            for(int i = de; i > 1; i--){
                if(n<2){
                    break;
                }
                de--;
                no++;
                n--;
            }
        }
         
    }
    
    printf("%lld/%lld\n", de, no);
    
    return 0;
}
