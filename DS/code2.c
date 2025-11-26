#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top=-1; 

void push(int x){
    if(top==SIZE-1){
        printf("Stack Overflow\n");
    }else{
        top++;
        stack[top]=x;
        printf("Element added to top of stack");
    }
}
int pop(){
    if(top==-1){
        printf("Stack Underflow\n");
        return -1;
    }else{
        int val = stack[top];
        top--;
        return val;
    }
}
int peek(){
    if(top==-1){
        printf("Stack Underflow\n");
        return -1;
    }else{
       return stack[top];
    }
}
int traverse(){
    if(top==-1){
        printf("Stack Underflow\n");
        return -1;
    }else{
        for(int i=top;i>=0;i--){
            printf("%d",stack[i]);
        }
        printf("\n");
    }
}
int main(){

    int choice,value;

    while(1){
         printf("\n1. Push\n2. Pop\n3. Peek\n4. Traverse\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


         switch(choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                value = pop();
                if (value != -1)
                    printf("Popped element = %d\n", value);
                break;

            case 3:
                value = peek();
                if (value != -1)
                    printf("Top element = %d\n", value);
                break;

            case 4:
                traverse();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}