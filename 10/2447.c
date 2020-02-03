#include <stdio.h>

int arr[2188][2188] = {0,};

void star(int w, int h, int n){
    
    if(n == 1){
        arr[w][h] = 1;
        return;
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i ==1 && j == 1){
                ;
            }
            else{
                star(w + i*n/3, h + j*n/3, n/3);
            }
        }
    }
    return;
}

int main(){
    
    int N;
    scanf("%d", &N);
    
    star(0,0,N);
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(arr[i][j] == 1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

