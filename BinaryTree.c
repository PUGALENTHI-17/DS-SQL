#include <stdio.h>
#include <stdlib.h>

struct node {
  int data; //data part
  struct node *right_child; // right child
  struct node *left_child; // left child
};

//function to create a node
struct node* new_node(int x) {
  struct node *temp;
  temp = malloc(sizeof(struct node));
  temp -> data = x;
  temp -> left_child = NULL;
  temp -> right_child = NULL;

  return temp;
}

// insertion
struct node* insert(struct node * root, int x){
  if (root == NULL)
    return new_node(x);
  else if (x > root -> data) // x is greater. Should be inserted to the right
    root -> right_child = insert(root -> right_child, x);
  else // x is smaller and should be inserted to left
    root -> left_child = insert(root -> left_child, x);
  return root;
}

//function to find the minimum value in a node
struct node* find_minimum(struct node * root) {
  if (root == NULL)
    return NULL;
  else if (root -> left_child != NULL) // node with minimum value will have no left child
    return find_minimum(root -> left_child); // left most element will be minimum
  return root;
}

// deletion
struct node* delete(struct node * root, int x) {
  //searching for the item to be deleted
  if (root == NULL)
    return NULL;
  if (x > root -> data)
    root -> right_child = delete(root -> right_child, x);
  else if (x < root -> data)
    root -> left_child = delete(root -> left_child, x);
  else {
    //No Child node
    if (root -> left_child == NULL && root -> right_child == NULL) {
      free(root);
      return NULL;
    }

    //One Child node
    else if (root -> left_child == NULL || root -> right_child == NULL) {
      struct node *temp;
      if (root -> left_child == NULL)
        temp = root -> right_child;
      else
        temp = root -> left_child;
      free(root);
      return temp;
    }

    //Two Children
    else {
      struct node *temp = find_minimum(root -> right_child);
      root -> data = temp -> data;
      root -> right_child = delete(root -> right_child, temp -> data);
    }
  }
  return root;
}

// Inorder Traversal
void inorder(struct node *root) {
  if (root != NULL) // checking if the root is not null
  {
    inorder(root -> left_child); // traversing left child
    printf(" %d ", root-> data); // printing data at root
    inorder(root -> right_child); // traversing right child
  }
}

int main() {
  struct node *root;
  root = new_node(10);
  int n;
  for(int i=0;i<8;i++ ){
    scanf("%d",&n);
    insert(root, n);
  }



  inorder(root);
  printf("\n");

  root = delete(root, 1);

  root = delete(root, 40);

  root = delete(root, 45);

  root = delete(root, 9);

  inorder(root);
  printf("\n");

  return 0;
}