#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*temp,*tail,*new;

void create(){

     int size ;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
    new =(struct node*)malloc((sizeof(struct node)));

    scanf("%d",&new->data);
    if(head==NULL){
            head =temp=new;
        }
        else{
            temp->next=new;
            temp =tail=new ;
            tail->next=head;
        
            
        }
}
}
void display(){
    temp=head;
    while (temp->next!=head)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    
}

int main(){
    create();
    display();
}


