#include<stdio.h>
#include<limits.h>
int bubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int swapped = 0;
        for(int j=0;j<size-i-1;j++){
            if(arr[i]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0) break;
    }

}

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Find index of minimum element
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap with the first element of unsorted part
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main(){



    return 0;
}