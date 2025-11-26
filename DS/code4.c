// Create a stack and perform push, pop, peek, traverse using Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int x){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = top;
    top = newNode;
    printf("Element added to stack\n");
}
int pop(){
    if(top==NULL){
        printf("Stack is empty\n");
        return -1;
    }
    struct Node* temp = top;
    int val = temp->data;
    top = top->next;
    free(temp);
    return val;
}
int peek(){
    if(top==NULL){
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}
int traverse(){
    if(top==NULL){
        printf("Stack is empty\n");
        return -1;
    }
    
    struct Node*temp = top;
    printf("Stack elements :\n");
    while(temp!=NULL){
        printf("%d  ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    push(10);
    push(20);
    push(40);


    traverse();

    return 0;
}