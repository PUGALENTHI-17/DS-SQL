#include<stdio.h>
#include<stdlib.h>


struct node {
    struct node *prev;
    int data ;
    struct node *next;
}*head,*temp,*prev,*new,*next,*tail;

void create (){
   
     int size ;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
         new =(struct node*)malloc((sizeof(struct node)));
    scanf("%d",&new->data);
    if(head==NULL){
        head=temp=new;
        head->prev =NULL;
        head->next =NULL;
    }
    else{
        temp->next =new;
        new->prev=temp;
        new->next =NULL;
        temp=tail=new;

    }
    }
}
void insertBeg(){
    //temp=head;
    new =(struct node*)malloc((sizeof(struct node)));
    scanf("%d",&new->data);
    //head=new;
    new->next=head;
    head->prev=new;
    head=new;
}

void insertEnd(){
    temp=tail;
    new =(struct node*)malloc((sizeof(struct node)));
    scanf("%d",&new->data);
    temp->next =new;
    new->next=NULL;
    new->prev=temp;
    tail=new;

}
void insertAtmid(){
             printf("-------------Insert at Mid ---------------------\n");

    temp=head;
    new =(struct node*)malloc((sizeof(struct node)));
    scanf("%d",&new->data);
    int pos ;
    scanf("%d",&pos);
    for ( int i = 0; i < pos-1; i++)
    {
        temp=temp->next;
        

    }
    temp->prev->next=new;
    new->next=temp;
    new->prev=temp->prev;
    temp->prev=new;
       

    
}

void display(){
    temp=head;
    printf("---------------------------------------\n");
    while (temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
        
    }
    printf("---------------------------------------\n");

    
}
void deleteAtEnd(){
    printf("-------------Delete at End ---------------------\n");
    temp=tail;
    temp->prev->next=NULL;
    free(temp);
    
}

void deleteAtfirst(){
     printf("-------------Delete at First ---------------------\n");
    printf("0");
    temp=head;
    head=temp->next;
    head->prev=NULL;
    free(temp);
}
void deleteAtMid(){
    printf("-------------Delete at Mid ---------------------\n");
    temp=head;
    int pos ;
    scanf("%d",&pos);
    for ( int i = 0; i < pos-1; i++)
    {
        temp=temp->next; 
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;

    free(temp);


}



int main(){
    create();
    
    insertAtmid();
    display();
    deleteAtMid();

    // insertBeg();
    // deleteAtfirst();
    display();
}

