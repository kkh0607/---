
#include <stdio.h>

char arr[52][52]; int min = 65;

int main(){
    
    int n,m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%s", arr[i]);
    
    for(int i = 0; i < n-7; i++) for(int j = 0; j < m - 7; j++){
        int wcount = 0; int bcount = 0;
        for(int a = i; a < i + 8; a++) for(int b = j; b < j + 8; b++){
            if((((a%2 == 0) && (b%2 == 0)) || ((a%2 == 1) && (b%2 == 1))) && arr[a][b] != 'W'){
                wcount++;
            }
            else if((((a%2 == 0) && (b%2 == 0)) || ((a%2 == 1) && (b%2 == 1))) && arr[a][b] != 'B'){
                bcount++;
            }
            else if((((a%2 == 0) && (b%2 == 1)) || ((a%2 == 1) && (b%2 == 0))) && arr[a][b] != 'W'){
                bcount++;
            }
            else if((((a%2 == 0) && (b%2 == 1)) || ((a%2 == 1) && (b%2 == 0))) && arr[a][b] != 'B'){
                wcount++;
            }
        }
       
        if(wcount < min){
            min = wcount;
        }
        if(bcount < min){
            min = bcount;
        }
    }
    
    printf("%d\n", min);
    
    
    return 0;
}
