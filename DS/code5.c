#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    int next;
    int prev;
};

struct Node* head = NULL;

//Create a new node at the end
void insertEnd(int val){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(head==NULL){
        head=newNode;
        return;
    }
    struct Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}

int main(){





    return 0;
}