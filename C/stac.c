#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;


// Pushing 
void push(int data){
    if(top == MAX - 1){
        printf("Stack Overflow\n");
        return;  
    }
    top = top + 1;
    stack_arr[top] = data;
}

//Poping 
int pop(){
    int value;
    if(top == -1){
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}

//Displaying
void disp(){
    int i;
    if(top == -1){
        printf("Stack Underflow\n");
        return;
    }
    for(i = top; i >= 0; i--){
        printf("|%d|\n", stack_arr[i]);
    }
    printf("\n");
}

void main(){
    int data;
    printf("------Pushing , Poping & Displaying Stack using Arrays----------\n");
    printf("\n");
    push(1);
    push(2);
    push(3);
    push(4);
    printf("Stack before popping : \n");
    disp();
    data = pop();
    data = pop();
    printf("\n");
    printf("Stack after popping : \n");
    disp();
}
