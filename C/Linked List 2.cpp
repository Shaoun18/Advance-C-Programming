#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int roll;
    char name[20];
    node *next;
};
struct node *head;
void insert_node()
{
    int r;
    char nam[20];
    node *New;
    New=(node*)malloc(sizeof(node));
    printf("Enter Roll\n");
    scanf("%d",&r);
    printf("Enter Name:\n");
    scanf("%s",&nam);
    if(head==NULL)
    {
        New->roll=r;
        strcpy(New->name,nam);
        New->next=NULL;
        head=New;
    }
    else
    {
        int n,m,i;
        printf("1:Insert from Front\n");
        printf("2:Insert from Back\n");
        printf("3: Insert After Specified number of nodes\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            {
                New->roll=r;
                strcpy(New->name,nam);
                New->next=head;
                head=New;
                break;
            }
        case 2:
            {
				node *temp;

				temp=head;
				while(temp->next != NULL)
					temp=temp->next;

				temp->next=New;

				New->roll=r;
				strcpy(New->name,nam);
				New->next=NULL;
				break;
            }
        case 3:
            {
                printf("\nEnter the node number:");
				scanf("%d",&m);

				int flag=0;
				node *temp1;
				temp1=head;

				for(i=1;i<m;i++)
				{
					temp1=temp1->next;
					if(temp1==NULL)
					{
						printf("\nNode does not exist");
						flag=1;
						break;
                    }
                }
                if(flag==0)
				{
					New->roll=r;
					strcpy(New->name,nam);
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
    int inp;
    int s,i,flag;
    if(head==NULL)
    {
        printf("\nNo node to delete");
    }
    else
    {
        node *t;
        t=(node*)malloc(sizeof(node));
        printf("1: Delete from front\n");
        printf("2: Dlete from back\n");
        printf("3: Delete specified number\n");
        scanf("%d",&inp);
        switch(inp)
        {
        case 1:
            {
                t=head;
                head=t->next;
                free(t);
                break;
            }
        case 2:
            {
                t=head;
                node *old;
                old=(node*)malloc(sizeof(node));

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
            {
                printf("Enter the node number\n");
                scanf("%d",&s);
                t=head;
                flag=0;
                node *old1;
                old1=(node*)malloc(sizeof(node));
                for(i=1;i<s;i++)
                {
                    old1=t;
                    if(old1->next==NULL)
                    {
                        printf("Node Does not exist\n");
                        flag=1;
                        break;
                    }
                    t=t->next;
                }
                if(flag==0)
                {
                    old1->next=t->next;
                    free(t);
                    break;
                }
                else
                    break;

            }
        }
    }
}
void display_node()
{
    node *tt;
    if(head==NULL)
    {
        printf("No Item in Link List");
    }
    else
    {
        tt=head;
        while(tt!=NULL)
        {
            printf("Roll: %d\n",tt->roll);
            printf("Name: %s\n",tt->name);
            tt=tt->next;
        }
    }
}
int main()
{
    int  input;
    head=NULL;
    while(1)
    {
        printf("Menu\n");
        printf("0: Quit\n");
        printf("1: Insert\n");
        printf("2: Delete\n");
        printf("3: Display\n");
        scanf("%d",&input);
    switch(input)
    {
    case 0:
    default:
        {
            exit(0);
            break;
        }
    case 1:
        {
            insert_node();
            break;
        }
    case 2:
        {
            delete_node();
            break;
        }
    case 3:
        {
            display_node();
            break;
        }
    }
    }
}

