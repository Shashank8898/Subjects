#include<stdio.h>

int BinarySearch(int arr[],int size,int val){
    int start=0,end=size-1;
    while(start<end){
        int mid = start + (end-start)/2;
        if(arr[mid]==val) return mid;

        if(arr[mid]>val) end=mid-1;
        else if(arr[mid]<val) start = mid+1;
    }

    return -1;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = BinarySearch(arr,10,6);
    printf("The answer of Binary Search is :");
    printf("%d",ans);
    return 0;
}