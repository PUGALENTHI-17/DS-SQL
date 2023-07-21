#include<stdio.h>
#include<stdlib.h>

struct node {

    int data;
    struct node *next ;
}*top=NULL,*temp,*new;


void push (){
    int size ;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        new = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        if(top==NULL){
            top=new;
        }
        else{
            new->next=top;
            top=new;
        }

    }
}

void display()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      temp = top;
      while(temp->next != NULL){
	 printf("%d--->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL",temp->data);
   }
}

void pop(){
    temp=top;
    top=top->next;
    free(temp);
}

void peek(){
    printf("\n%d\n",top->data);
}

int main(){
    push();
    printf("\n");
    display();
    printf("\n");
    peek();
    printf("\n");
    pop();
    printf("\n");
    peek();
    printf("\n");
    
}

