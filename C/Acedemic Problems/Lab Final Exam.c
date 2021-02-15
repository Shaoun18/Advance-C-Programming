 #include<stdio.h>
int main()
{
    int x;
    FILE *copy1;
    FILE *copy2;

    copy1=fopen("d:\\lab\\copy1.txt", "r");
    if(copy1==NULL)
    {
        printf("ERROR");
        exit(1);
    }
    else
    {
       fscanf(copy1,"%d",&x);
       fclose(copy1);
    }

    copy2=fopen("d:\\lab\\copy2.txt", "w");
    if(copy2==NULL)
    {
        printf("ERROR");
        exit(1);
    }
    else
    {
        fprintf(copy2,"%d",x*3);
        fclose(copy2);
    }
    return 0;
}
