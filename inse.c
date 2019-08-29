#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
Node;
struct Node* head;
void insert(int x,int n)
{ int i;
   struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(n==1){
        temp->next=head;
    head = temp;
    return;
    }
    struct Node *temp2 = head;
    for(i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }

    temp->next=temp2->next;
    temp2->next=temp;
}



void disp()
{
    struct Node* temp = head;
    printf("list is: ");
    while(temp != NULL)
    {
        printf("%d", temp->data);
        temp= temp->next;
    }
    printf("\n");
}

int main()
{
    head = NULL;// empty list
    printf("enter number of elements \n");
    int n,i,x,z;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
       printf("enter the number \n");
       scanf("%d",&x);
       printf("enter the pos \n");
       scanf("%d",&z);
       insert(x,z);
       disp();
    }
    return 0;
}
