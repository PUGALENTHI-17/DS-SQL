#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
}*newnode,*root;


void display(struct node*root);
void insert();
void search(struct node *newnode,struct node *root);
int main()
{
insert();
display(root);
}
void insert()
{
    int choice=1;
    while(choice==1)
    {
        newnode=malloc(sizeof(struct node));
        newnode->left=0;
        newnode->right=0;
        printf("Enter the data");
        scanf("%d",&newnode->data);
        if(root==0)
        {
            root=newnode;
        }
        else
        {
            search(newnode,root);
        }
        printf("Choice ");
        scanf("%d",&choice);
    }
}
void search(struct node *newnode,struct node *root)
{
    if((newnode->data)<(root->data)&&root->left==0)
    {
        root->left=newnode;
    }
    if((newnode->data)>(root->data)&&root->right==0)
    {
        root->right=newnode;
    }
    if((newnode->data)<(root->data)&&root->left!=0)
    {
        search(newnode,root->left);
    }
    if((newnode->data)>(root->data)&&root->right!=0)
    {
        search(newnode,root->right);
    }
}
void display(struct node *root)
{
    if(root==0)
    {
        return;
    }
    else
    {
        display(root->left);
        printf("%d ",root->data);
        display(root->right);
        
}
}