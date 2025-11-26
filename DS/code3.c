#include<stdio.h>
#define SIZE 10

int arr[SIZE];
int top1 =-1;
int top2 = SIZE;

void push1(int x){
    if(top1+1==top2){
        printf("Stack 1 overflows\n");
    }else{
        top1++;
        arr[top1]=x;
        printf("Element added in stack1");
    }
}
void push2(int x){
    if(top1+1==top2){
        printf("Stack 2 overflows\n");
    }else{
        top2--;
        arr[top2]=x;
        printf("Element added in stack2");
    }
}
int pop1(){
    if(top1==-1){
        printf("stack is empty");
        return -1;
    }else{
        int val = arr[top1];
        top1--;
        printf("Element popped from stack1");
        return val;
    }
}
int pop2(){
    if(top2==SIZE){
        printf("stack is empty");
        return -1;
    }else{
        int val = arr[top2];
        top2++;
        printf("Element popped from stack2");
        return val;
    }
}
int main(){
    push1(1);
    push1(43);
    push1(345);


    return 0;
}