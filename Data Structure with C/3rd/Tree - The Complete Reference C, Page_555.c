#include<stdio.h>
#include<stdlib.h>

struct tree {
  int info;
  struct tree *left;
  struct tree *right;
};

typedef struct tree node;




node *stree(struct tree *root, struct tree *r, int info)
{
  if(!r) {
    r = (struct tree *) malloc(sizeof(struct tree));
    if(!r) {
      printf("Out of Memory\n");
      exit(0);
    }
    r->left = NULL;
    r->right = NULL;
    r->info = info;
    if(!root) return r; /* first entry */
    if(info < root->info) root->left = r;
    else root->right = r;
    return r;
  }
  if(info < r->info)
    stree(r,r->left,info);
  else
    stree(r,r->right,info);

  return root;
}




//listing 18
void inorder(struct tree *root)
{
  node *r = root;

  if(!root) return;

  inorder(r->left);
  if(r->info) printf("%d ", r->info);
  inorder(r->right);
}




//listing 19
void preorder(struct tree *root)
{
  node *r = root;

  if(!r) return;

  if(r->info) printf("%d ", r->info);
  preorder(r->left);
  preorder(r->right);
}





void postorder(struct tree *root)
{
  node *r = root;

  if(!r) return;

  postorder(r->left);
  postorder(r->right);
  if(r->info) printf("%d ", r->info);
}






//listing 20
void print_tree(struct tree *r, int l)
{
  int i;

  if(r == NULL) return;

  print_tree(r->right, l+1);
  for(i=0; i<l; ++i) printf(" ");
  printf("%d\n", r->info);
  print_tree(r->left, l+1);
}





void main()
{
    int n, l;

    node *start = NULL, *temp = NULL;
    int data = 0;

    while(1){
            printf("\n\n\n");
        printf(" \t1. Insert\n");
        printf(" \t2. Pre order traverse\n");
        printf(" \t3. In order traverse\n");
        printf(" \t4. Post order traverse\n");
        printf(" \t5. Print Tree According to Length\n");
        printf(" \t6. Exit\n");
        printf("\n");
    printf("\n Select your choice:  ");
    scanf(" %d",&n);
    printf("\n\n\n");
    switch(n)
    {
    case 1:
        //temp = start;
        printf("\n Please Enter Value :  ");
        scanf(" %d", &data);

        start = stree(start, temp, data);
        break;

    case 2:
        preorder(start);
        break;

    case 3:
        inorder(start);
        break;

    case 4:
        postorder(start);
        break;

    case 5:
        printf("\n Please Enter Tree Length :  ");
        scanf(" %d", &l);

        print_tree(start, l);
        break;

    case 6:
        exit(1);
        break;

    default:
        printf("\n\nInvalid!\n");
        printf("\n\n\n");
    }

}
}
