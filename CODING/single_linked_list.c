#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *temp;
void ins_beg(struct node*);
void ins_end(struct node*);
void ins_node(struct node*);
void del_beg();
void del_end();
void traverse();
int main()
{ 
    int choice,n,pos;
    struct node *new1;
    while(1)
    {
        printf("\nEnter the choice :\n");
        printf("1.ins_beg\n2.ins_end\n3.ins_node\n4.del_beg\n5.del_end\n6.traverse\n7.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: 
               new1=(struct node*)malloc(sizeof(struct node));
               printf("Enter the data:");
               scanf("%d",&new1->data);
               new1->next=NULL;
               ins_beg(new1);
               break;
        case 2:
               new1=(struct node*)malloc(sizeof(struct node));
               printf("Enter the data: ");
               scanf("%d",&new1->data);
               new1->next=NULL;
               ins_end(new1);
               break;
        case 3:
               new1=(struct node*)malloc(sizeof(struct node));
               printf("Enter the position : ");
               scanf("%d",&pos);
               ins_node(new1);

        case 4:
               del_beg();
               break;
        case 5:
               del_end();
               break;
        case 6:
               traverse();
               break;
        default:
                exit(1);
        }
    }   
}
    void ins_beg(struct node *new1){
    
        if(head==NULL)
        {
            head=new1;
        }
        else
        {
            new1->next=head;
            head=new1;
        }
    }
    void ins_end(struct node *new1)
    {
        temp=head;
        if(head==NULL)
        {
            head=new1;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
                temp->next=new1;
            }
        }
        
    }
    void ins_node(struct node *new1)
    {
        int pos,i=1,count;
        if(pos>count)       
        {
            printf("Invalid position.");
        }
        else{
            temp=head;
            while(i<pos)
            {
                temp=temp->next;
                i++;
            }
            printf("enter the data : ");
            scanf("%d",&new1->data);
            new1->next=temp->next;
            temp->next=new1;
            }

    }
    void del_beg()
    {
        if(head==NULL)
        {
            printf("no item to delete");
        }
        else{
            head=head->next;
        }
    }
    void del_end()
    {
        struct node *prevnode,*temp;
        temp=head;
        while (temp->next!=0)
        {
            prevnode=temp;
            temp=temp->next;
        }
        
         

    }
    void traverse()
    {
        struct node *temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }