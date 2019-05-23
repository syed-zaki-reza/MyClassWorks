#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct link_list
{
    int n;
    struct link_list *link;
};

typedef struct link_list node;

void main()
{
    struct link_list *temp, *start, *prev;

    temp = (node*)malloc(sizeof(node));

    scanf(" %d",temp->n);
    printf(" %d")

}
