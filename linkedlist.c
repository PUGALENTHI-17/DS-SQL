#include<stdio.h>
#include<stdlib.h>

struct node {
    int data ;
    struct node *next;
} *head ,*temp,*new,*tail ,*ptr,*temp1;

void create (){
    int size ;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        new = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        if(head==NULL){
            head =temp=new;

        }
        else{
            temp->next=new;
            temp =new ;
            tail =new ;
            
        }
    }

}

void display(){
    temp =head ;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void insertfront(){
        new = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next = head;
        head=new;

}

void insertLast(){
        temp=head;
        new = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next =new ;
        new->next =NULL;
}

void deleteFront(){
        temp = head->next;
        head->next=NULL;
        free(head);
        head=temp;
        
}

int  count(){
    int count=0;
    temp =head ;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    // printf("%d\n",count);
    return count;
}
void oddEven(){
    temp =head ;
    printf("Even:");
    while(temp!=NULL){
        if(temp->data%2==0){
            printf("%d",temp->data);
            
        }
        temp=temp->next;
    }
    printf("\n");
    temp =head ;
    printf("Odd:");
     while(temp!=NULL){
        if(temp->data%2!=0){
            printf("%d",temp->data);

        }
        temp=temp->next;
    }
        printf("\n");

    

}

void deleteLast(){
    temp =head;
    while(temp->next!=NULL){
        
    }

}

void search(){
    int ele ;
    int f =0;
    printf("Enter the element to search :");
    scanf("%d",&ele);
    temp =head;
    while(temp!=NULL){
        if(temp->data==ele){
            f=1;
        }
        temp=temp->next;
    }
    if(f==1){
        printf("Found\n");
    }
    else{
         printf("Not Found\n");
        
    }

}

void insert_at_middle(){
    int pos =count()/2;

    new = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    temp=head;
    for(int i=0;i<pos;i++){
        temp=temp->next;
    
    }
     ptr=temp->next;
    temp->next=new;
    new->next =ptr;
}

void descesding(){
    // temp=head ;
    

    for (temp =head ; temp!=NULL; temp=temp->next)
    {
        for (temp1 =temp->next; temp1!=NULL ;temp1=temp->next)
        {
            if (temp->data <temp1->data)
            {
                int t = temp->data;
                temp->data =temp1->data;
                temp1->data=t;

            }
            
        }
        
    }
    
    
}

void reverseList()
{

    if(head != NULL)
    {
        ptr = head;
        temp = head->next;
        head = head->next;

        ptr->next = NULL; 

        while(head != NULL)
        {
            head = head->next;
            temp->next = ptr;

            ptr = temp;
            temp = head;
        }

        head = ptr; 
    }
}
void deleteAlt ()
{
    ptr = head;
    temp = head->next;

  while (ptr != NULL && temp != NULL)
    {
      ptr->next = temp->next;
      free (temp);
      ptr = ptr->next;
      if (ptr != NULL)
	temp = ptr->next;
    }
}

int main(){
    create();
    display();
    // insertfront();
    // display();
    // insertLast();
    // deleteFront();
    // display();
    // count();
    // oddEven();
    // search();
    // insert_at_middle();
    // reverseList();
    // descesding();
    deleteAlt();
    display();

}