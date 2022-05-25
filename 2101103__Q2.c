#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* enqueue(struct Node* rear,int data)
{
    struct Node* ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
     struct Node* temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    rear->next=ptr;
    ptr->data=data;
    ptr->next=NULL;
    return ptr;
}
struct Node*  dequeue(struct Node* head)
{
    
    struct Node* temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp=head->next;
    free(head);
    head=temp;
    return head;
    
}

void traverse(struct Node* head)
{
    struct Node* temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
int main()
{
    struct Node* head;
    head=(struct Node*)malloc(sizeof(struct Node));
    head->next=NULL;
    struct Node* rear;
    rear=(struct Node*)malloc(sizeof(struct Node));
    rear->next=NULL;
    head=rear;
    struct Node* ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    int n;
    printf("Enter total number of patients: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int d;
        printf("Enter patient number: ");
        scanf("%d",&d);
        if(i==0)
        {
            ptr=enqueue(head,d);
            head=ptr;
            rear=ptr;
        }
        else
        {
            rear=enqueue(rear,d);
        }
        
    }
   
    printf("\n");
    printf("1st patient to be treated %d\n",head->data);
    for(int i=2;i<=n;i++)
    {
        printf("%d Patient to be treated ",i);
        head=dequeue(head);
        printf("%d\n",head->data);
    }
    return 0;
}