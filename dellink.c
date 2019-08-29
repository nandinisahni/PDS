#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}Node;
struct Node *head;
void insert(int x)
{
    struct Node *temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data = x;
    temp1->next = NULL;
    if(head!=NULL)
        temp1->next = head;
    head = temp1;
}
void disp(){
    struct Node *temp2 = head;
    printf("list is");
    while(temp2!=NULL)
    {
        printf("%d",temp2->data);
        temp2 = temp2->next;
    }
    printf("\n");
}

void del(int n)
{
    struct Node *temp3 = head;
    if(n==1)
    {
        head = temp3->next;
        free(temp3);
    }

    int i;
    for(int i=0;i<n-2;i++)
        temp3 = temp3->next;
    struct Node *temp4 = temp3->next;
    temp3->next = temp4->next;
    free(temp3);
}

int main()
{
    head = NULL;
    int i,n,x,a;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        printf("enter the number \n");
        scanf("%d",&x);
        insert(x);
        disp();
        }
printf("enter the position");
        scanf("%d",&a);
        del(a);
disp();

}
