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


#undef pri printf("\n\n\n");

void insert(node **tree, int val)
{
    pri;

    node *temp = NULL;

    if(!(*tree))
    {
        temp = (node*)malloc(sizeof(node));

        temp->left = temp->right = NULL;

        temp->data = val;

        (*tree) = temp;

        return;
    }

    else if(val <= (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }


    else if(val > (*tree)->data)
        insert(&(*tree)->right, val);

}





void inorder(node *r)
{
    if(r == NULL)
    {
        printf("\nloop");
        return;
    }

    inorder(r->left);
    printf("  %d",r->data);
    inorder(r->right);
}





void main()
{
    int v;
    node **tree;

    pri;

    while(1)
    {
        printf("Enter a Value :  ");
        scanf(" %d", &v);
        pri;

        insert(&start, v);
        pri;
        inorder(start);

        pri;
    }

}
