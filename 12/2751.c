#include <stdio.h>


void merge(int arr[], int start, int pivot, int end){
    int num = 0; int newstart = start; int newend = pivot + 1;
    int copy[end+1];
    while(newstart <= pivot && newend <= end){
        if(arr[newstart] > arr[newend]){
            copy[num] = arr[newend];
            newend++; num++;
        }
        else{
            copy[num] = arr[newstart];
            newstart++; num++;
        }
    }
    
    if(newstart > pivot) for(int i = newend; i <= end; i++, num++) copy[num] = arr[i];
    else for(int i = newstart; i <= pivot; i++, num++) copy[num] = arr[i];
    
    for(int i = start, j = 0; i <= end; i++, j++){
        arr[i] = copy[j];
    }
}

void mergesort(int arr[], int start, int end){
    
    if(start < end){
        int pivot = (start + end)/2;
        mergesort(arr, start, pivot);
        mergesort(arr, pivot+1, end);
        merge(arr, start, pivot, end);
    }
}

int main(){
    
    int N; int arr[1000000];
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    mergesort(arr, 0, N-1);
    
    for(int i = 0; i < N; i++){
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
