#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct link_list
{
    char n;
    struct link_list *link;
};

typedef struct link_list node;

node create()
{
    node a;
    printf("\n Please Enter A Link");
    scanf()
}


main()
{
    int i,j,n;
    struct link_list temp;
    node *cur, *prev, *start;

    //temp=(node*)malloc(sizeof(node));
    start=(node*)malloc(sizeof(node));

    prev=start;
    scanf(&cur->name);


    printf("Please Enter Element Number: ");
    scanf("%d",&n);

    printf("\n\nPlease Enter Names:\n");
    for(;;)
    {
        cur=(node*)malloc(sizeof(node));
        scanf(&cur->name);

        prev->link=cur;
        prev=cur;

        if(cur->name==-1) break;
    }
    cur->link=NULL;

}
