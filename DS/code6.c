//Binary search tree and tree traversals
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

//Create a new node
struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left = newNode->right = NULL;
    return newNode;
}
//Insert into BST
struct Node* insert(struct Node*root,int value){
    
}
int main(){



    return 0;
}