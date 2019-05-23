
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct link_list
{
    int x;
    struct link_list *link;
};



typedef struct link_list node;

node *start=NULL;






void create()
{
    node *point=start, *temp;
    int i=0;

    temp = (node*)malloc(sizeof(node));

    printf("\n Enter a Value : ");
    scanf("%d",&temp->x);

    temp->link = NULL;

    if(start == NULL)
    {
        start=temp;
    }

    else
    {
        while(point->link != NULL)
        {
            point = point->link;
        }
        point->link = temp;

    }

}






void insertany(int pos, int val)
{
    node *temp, *p = start;
    int i=0;

    temp = (node*)malloc(sizeof(node));

    printf("\n\n");

    if(start == NULL)
        {
            printf(" \t*** No Data Available ***");
        }

    if (pos != 1)
    {

        if(start != NULL)
        {
            temp->x = val;
            temp->link = NULL;

            for(i=0;i<=pos-3;i++)
            {
                p = p->link;
            }
        }


        temp->link = p->link;
        p->link = temp;

    }

    else
    {
        temp->x = val;
        temp->link = start;
        start = temp;
    }

    if (start != NULL)
    {
        printf("\n\n\t *** New List ***\n");
        temp = start;

        while(temp != NULL)
        {
            printf("\t %d", temp->x);
            temp=temp->link;
        }
    }

    printf("\n\n");
}






void deletion(int y)
{
    node *temp=start, *p1=NULL, *p2=NULL;
    int i=0;

    if(start == NULL)
        printf("\n\n *** No Data Available ***");

    printf("\n\n");

    while(temp != NULL)
    {

        if(temp->x == y)
        {
            p1 = temp;
            p2 = temp->link;
            break;
        }

        temp = temp->link;
    }

    temp = start;

    while(temp != NULL)
    {
        if(temp->link == p1)
        {
            break;
        }

        temp = temp->link;
    }

    temp->link=p2;

    temp=start;

    if (start != NULL) printf("\n\n\t *** New List ***\n");

    while(temp != NULL)
    {
        printf("\t  %d", temp->x);
        temp=temp->link;
    }

    printf("\n\n");
}





void display()
{
    node *temp=start;

    printf("\n\n\t*** The List ***\n\n");

    while(temp != NULL)
    {
        printf("\t%d", temp->x);
        temp=temp->link;
    }

    printf("\n\n");
}






void main()
{
    int n,i,j;

    while(1)
    {
        printf("\n\t *** Select Your Option *** ");
        printf("\n\n    \t 1. Insert");
        printf("\n    \t 2. Insert at Any Place");
        printf("\n    \t 3. Delete");
        printf("\n    \t 4. Display");
        printf("\n    \t 5. Exit\n\n\t: ");

        scanf("%d", &n);
        printf("\n\n");

        switch(n)
        {
            case 1:
                create();
                break;

            case 2:

                printf("\n Please Insert The Position to Insert :   ");
                scanf("%d", &i);

                printf("\n Please Insert The Value You Want to Insert :   ");
                scanf("%d", &j);

                insertany(i,j);
                break;

            case 3:

                printf("\n Please Insert The Value Which You Want to Delete :   ");
                scanf("%d", &i);

                deletion(i);

                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("\n\t******Invalid!!!******");
        }
        printf("\n\n\n\n\n");
    }
}
