#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*head,*head1,*temp,*new,*new1,*temp1,*ind;


void create (){
    int size ;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        new = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL){
            head =temp=new;

        }
        else{
            temp->next=new;
            temp =new ;
        }
    }
    //temp=NULL;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        new1 = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new1->data);
        new1->next=NULL;
        if(head1==NULL){
            head1 =temp1=new1;

        }
        else{
            temp1->next=new1;
            temp1 =new1 ;
        }
    }
}

void merge (){
    temp = head;
    while (temp->next!=NULL)
    {
        temp =temp->next;
    }
    temp->next =head1;
    
}
void display (){
    temp = head;
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp =temp->next;
    }
    printf("\n");
}


void sort(){
    temp=head;
    while (temp!=NULL)
    {
       ind=temp->next;
       while (ind!=NULL)
       {
        if(temp->data>ind->data){
            int a = temp->data;
            temp->data=ind->data;
            ind->data =a;
        }
        ind=ind->next;
       }
       temp=temp->next;
       
    }
    
}

int main(){
    create ();
    display();
    merge();
    sort();
    display();
}