#include<stdio.h>
#include<string.h>

int main()
{
    char x,y;
    char str1[100],str2[100],str3[100],str4[100];

    again : printf("\n Please Select : \n\n\ta) Show The Length of The String \n\tb) Concatenate Str2 to St1 \n\tc) Copy Str2 to Another Sting Str3 \n\td) Copy from Begin to End of Str1 to Another String Str4 \n\n\t\t");

    scanf("%c",&x);

    if(x=='a'||x=='A')
   {
        x=y= '0';

        printf("\n Please Enter The Str1 : \n");

        scanf("%s",str1);

        printf("\n You Had Entered \"%s\" & Its Length Is : %d \n",str1,strlen(str1));

        printf("\n\n Do You want to Continue or, Goto End ? \n\n\tSelect :\n\t\t'C' to Continue or 'E' to End\n\n\t\t\t");

        scanf("%c",&y);

        if(y=='c'||y=='C')
            goto again;
        else if(y=='e'||y=='E')
            goto ending;
    }

    if(x=='b'||x=='B')
    {
        x=y= '0';

        printf("\n Please Enter Str1 :\n");
        scanf("%s",str1);

        printf("\n Please Enter Str2 :\n");
        scanf("%s",str2);

        printf("\n Str1 : \"%s\" & Str2 : \"%s\" Combining Them It Is : \n\t\t\t\"%s\"",str1,str2,strcat(str1,str2));

        printf("\n\n Do You want to Continue or, Goto End ? \n\n\tSelect :\n\t\t'C' to Continue or 'E' to End\n\n\t\t\t");

        scanf("%c",&y);

        if(y=='c'||y=='C')
            goto again;
        else if(y=='e'||y=='E')
            goto ending;
    }

    if(x=='c'||x=='C')
    {
        x=y= '0';

        printf("Please Enter Str2 : \n");
        scanf("%s",str2);

        strcpy(str2,str3);

        printf(" Str1 : \"%s\"\n Str2 : \"%s\"\n Str2 : \"%s\"",str1,str2,str3);

        printf("\n\n Do You want to Continue or, Goto End ? \n\n\tSelect :\n\t\t'C' to Continue or 'E' to End\n\n\t\t\t");

        scanf("%c",&y);

        if(y=='c'||y=='C')
            goto again;
        else if(y=='e'||y=='E')
            goto ending;
    }

/*    if(x=='d'||x=='D')
    {
        x=y= '0';

        printf("\n\n Do You want to Continue or, Goto End ? \n\n\tSelect :\n\t\t'C' to Continue or 'E' to End\n\n\t\t\t");

        scanf("%c",&y);

        if(y=='c'||y=='C')
            goto again;
        else if(y=='e'||y=='E')
            goto ending;
    }

    */

    ending : printf("\n\n\n\t\t\t   -------THE END-------\n\n\n\n\n");


}
