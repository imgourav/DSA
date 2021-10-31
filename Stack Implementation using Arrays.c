#include<stdio.h> 
#include<stdlib.h>
#define MAX 5

int stack_arr[MAX];
int top= -1;

void push(int data){
    if(top==MAX-1)
        printf("Stack Overflow!");
    top=top+1;
    stack_arr[top]=data;
}
int pop(){
    int value;
    if(top==-1)
        printf("Stack Underflow!\n");
    value=stack_arr[top];
    top=top-1;
    return value;
}
int peek(){
    int peek_val;
    if(top==-1)
        printf("Stack Underflow!\n");
    peek_val=stack_arr[top];
    return peek_val;
}
void print(){
    int i;
    if(top==-1){
        printf("Stack Underflow!\n");
        return;
    }
    for(i=top;i>=0;i--){
        printf("%d ",stack_arr[i]);
        printf("\n");
    }
}

int main(){

    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Print the top element\n");
    printf("4. Print all the elements of the Stack\n");
    printf("5. Exit\n\n");

    int choice, element,data,val;
    while(1){
        printf("Enter your choice: ");
        scanf("%d",&choice);

    switch(choice){
    case 1:
        printf("Enter the element to be pushed: ");
        scanf("%d",&element);
        push(element);
        break;
    
    case 2:
        data=pop();
        printf("Deleted Element is %d\n",data);
        break;

    case 3:
        val=peek();
        printf("The top element is %d\n",val);
        break;

    case 4:
        print();
        break;
    
    case 5:
        exit(1);

    default:
        printf("Invalid Choice!\n");
    }}

    return 0;
}
