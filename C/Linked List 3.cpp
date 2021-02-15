#include<stdio.h>
#include<stdlib.h>
struct node
{
    int id;
    char name[20];
    node *next;
};
struct node *head;
void inseert node()
{
    int c,r,i,l;
    char n[20];
    node *New;
    New=(node*)malloc(sizeof(node));
    printf("Enter Roll:"):
    scanf("%d",&r);
    printf("Enter Name:");
    scanf("%d",&n);

    if(head==NULL)
    {
        New->roll=r;
        strcpy(New->name,n);
        New->next=NULL;
        head=New;
    }
    else
    {
        printf("1:Insert from front\n");
        printf("2:Insert from back\n");
        printf("3:Insert from specific line\n");
        switch(c)
        {
        case 1:
            {
                New->roll=r;
                strcpy(New->name,n);
                New->next=head;
                head=New;
                break;
            }
        case 2:
            {
                node *temp;
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=New;
                New->roll=r;
                strcpy(New->name,n);
                New->next=NULL;
                break;
            }
        case 3:
            {
                int flag=0;
                printf("Enter node number:\n");
                scanf("%d",&l);
                node *temp1;
                temp1=head;
                for(i=1;i>l;i++)
                {
                    temp1=temp1->next;
                    if(temp1->net==NULL)
                    {
                        printf("Node Does not exist");
                        flag=1;
                        break;
                    }
                }
                if(flag=0)
                {
                    New->roll=r;
                    strcpy(New->name,n);
                    New->next=temp1->next;
                    temp1->next=New;
                }
                else
                    break;
            }
        }

    }
}
void delete_node()
{
    int c,m;
    node *t;
    t=(node*)malloc(sizeof(node));
    printf("1:Delete from front\n");
    printf("2:Delete from back\n");
    printf("3:Delete any node\n");

    switch(c)
    {
    case 1:
        {
            if(head==NULL)
            {
                printf("Does not exist");
                break;
            }
            else
            {
                t=head;
                head=t->next;
                free(t);
            }
        }
    case 2:
        {
            node *old;
            old=(node*)malloc(sizeof(node));
            t=head;
            if(t->next==NULL)
            {
                head=NULL;
                free(t);
                break;
            }
            else
            {
                while(t->next!=NULL)
                {
                    old=t;
                    t=t->next;
                }
                old->next=NULL;
                free(t);
                break;
            }
        }
    case 3:

    }
}
int main()
{
    head=NULL;
    int c;
    printf("Menu\n");
    printf("1: Insert\n");
    printf("2: Delete\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        {
            insert_node();
            break;
        }
    case 2:
        {
            delete_node()
            break;
        }
    }
}
