
#include<stdio.h>
#include<stdlib.h>

#define pri printf("\n\n\n");

//binary search tree

typedef struct bin_tree
{
    int data;

    struct bin_tree *left, *right;
} node;



node *start = NULL;





void preorder(node *r);
node *insert(node *s, int val);





node *insert(node *s, int val)
{
    node *p;

    if(s == NULL)
    {
        node *temp = NULL;
        temp = (node *) malloc(sizeof(node));

        temp->left = NULL;
        temp->right = NULL;
        temp->data = val;

        s = temp;

        if(start == NULL)
        {
            start = s;
            return s;
        }

        preorder(start);
    }

    else if(val <= s->data)
    {
        p->left = insert(s->left, val);
    }


    else if(val > s->data)
    {
        p->right = insert(s->right, val);
    }

    return p;
}




void preorder(node *r)
{


  if(r == NULL)
  {
      printf("\n\n *****No Data Available***** \n\n");
  }

  else{
    printf("%d  ", r->data);
    preorder(r->left);
    preorder(r->right);
    }
}




void main()
{
    int n, l;

    node *temp = NULL;
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
        printf("\n Please Enter Value :  ");
        scanf(" %d", &data);

        start = insert(temp, data);
        break;

    case 2:
        preorder(start);
        break;

    default:
        printf("\n\n\t*****Invalid!*****\n");
        printf("\n\n\n");
    }
}
}
