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
int ltr = 0;
int co=0;


void insert(node **tree, int val)
{
    node *temp=NULL;

    if(!(*tree))
    {
        temp = (node*)malloc(sizeof(node));

        temp->left = temp->right = NULL;

        temp->data = val;

        (*tree) = temp;

        return;
    }

    else if(val <= (*tree)->data)
        insert(&(*tree)->left, val);

    else if(val > (*tree)->data)
        insert(&(*tree)->right, val);

}





void inorder(node *r)
{
    if(!r)
    {

        return;
    }

    inorder(r->left);
    printf("  %d",r->data);
    inorder(r->right);
}





void lentree(node *r)
{
    if(!r)
    {

        return;
    }

    lentree(r->left);
    lentree(r->right);
    ltr++;
}





void len(node *r, int val)
{


    if(!r)
    {
        pri;
        printf("\nNot-in-Order\n");
        pri;
    }

    else if(val == r->data)
    {
        printf("\nFound at : %d",co);
    }

    else if(val <= r->data)
    {
        co++;
        len(r->left, val);
    }

    else if(val > r->data)
    {
        co++;
        len(r->right, val);
    }

}




void main()
{
    int v, n;
    node *tree ;

    pri;
    while(1){

            {
            printf("\n\n\n");
        printf(" \t1. Insert\n");
        printf(" \t2. In order traverse\n");
        printf(" \t3. Print Tree According to Length\n");
        printf(" \t4. Post order traverse\n");
        printf(" \t5. Pre order traverse\n");
        printf(" \t6. Exit\n");
        printf("\n");
    printf("\n Select your choice:  ");
    scanf(" %d",&n);
    printf("\n\n\n");

    switch(n)
    {
    case 1:
        printf("\n Please Enter Value :  ");
        scanf(" %d", &v);
        insert(&start, v);
        break;

    case 2:
        inorder(start);
        break;

    case 3:
        printf("\n Please Enter Value for Length:  ");
        scanf(" %d", &v);
        co = 0;
        len(start,v);
        break;

    case 4:
        ltr = 0;
        lentree(start);
        printf("\n Full Length of Tree:  %d", ltr);

        break;

    default:
        printf("\n\n\t*****Invalid!*****\n");
        printf("\n\n\n");
    }
}

}
}
