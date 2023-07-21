#include<stdio.h>
#include<stdlib.h>
#define size 5

int stack[size];
int top=-1;


void push(){
    if(top==size-1){
        printf("overflow");
          }
    else{
        top++;
        scanf("%d",&stack[top]);
    }
}

void pop(){
    top=top-1;
}
void display(){
    for (int i = top; i >=0; i--)
    {
        printf("%d",stack[i]);
    }
    printf("\n");
}
void peek(){
    printf("%d\n",stack[top]);
}


int main(){
    push();
    push();
    push();
    push();
    push();
    display();
    pop();
    peek();
}
