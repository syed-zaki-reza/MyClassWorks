#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
    struct node *ll;
    struct node *rl;

};
struct node *root=NULL;
void insert();
void pretraverse(struct node *temp);
void intraverse(struct node *temp);
void posttraverse(struct node *temp);

main()
{
    int n;
    while(1){
        printf("1.Insert\n2.pre order traverse\n3. In order traverse\n4.Post order traverse\n5.Exit\n");
    printf("Select your choice:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        insert();
        break;
    case 2:
        pretraverse(root);
        break;
        case 3:
        intraverse(root);
        break;
        case 4:
            posttraverse(root);
            break;
    case 5:
        exit(1);
        break;
    default:
        printf("Invalid!");
    }

}}
void insert()
{int n,i=0;
printf("Select range:");
scanf("%d",&n);
while(i<n)
{  i++;
    struct node *temp,*p=root,*par;
temp=(struct node *)malloc(sizeof(struct node));
printf("Insert a data:");
scanf("%d",&temp->data);
temp->ll=NULL;
temp->rl=NULL;
if(root==NULL)
    root=temp;
else
{
    while(p!=NULL)
    {
        par=p;
        if(temp->data > p->data)
            p=p->rl;
        else
            p=p->ll;
    }
    if(par->data<temp->data)
        par->rl=temp;
    else
        par->ll=temp;
}}}
void intraverse(struct node *temp)
{

    if(temp->ll!=NULL)
        intraverse(temp->ll);
    printf("%d\t",temp->data);
    if(temp->rl!=NULL)
        intraverse(temp->rl);

}
void posttraverse(struct node *temp)
{

    if(temp->ll!=NULL)
        posttraverse(temp->ll);

    if(temp->rl!=NULL)
        posttraverse(temp->rl);
         printf("%d",temp->data);

}
void pretraverse(struct node *temp)
{
  printf("%d\t",temp->data);
    if(temp->ll!=NULL)
        pretraverse(temp->ll);

    if(temp->rl!=NULL)
        pretraverse(temp->rl);

}

