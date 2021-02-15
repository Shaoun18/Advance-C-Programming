#include<stdio.h>
int main()
{
    char c[200],str[20];
    int i,x=0;

    FILE *cancel_req;
    cancel_req=fopen("d:\\project\\precords.txt", "r");

    if(cancel_req==NULL)
    {
        printf("Error! File Missing!");
        exit(1);
    }
    else
    {
        scanf("%s",&str);
            while((fscanf(cancel_req,"%s",&c))!=EOF)
                if(strcmp(str,c)==0)
                    x++;
            fclose(cancel_req);
        //}
        if(x==0)
            printf("Sorry");
        else
            printf("Find");
    }
}
