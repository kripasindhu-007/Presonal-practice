#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
};


 struct node* add(int n,struct node *head){
    struct node *temp=malloc(sizeof(struct node));
    
    temp->data=n;
    temp->next=NULL;

    temp->next=head;
    head=temp;
    return head;


}

void display_list( struct node *head){
    if(head==NULL)
    printf("\nList is empty");
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}

int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=3;
    head->next=NULL;
    head=add(4,head);
    head=add(5,head);
    head=add(6,head);
    display_list(head);


    return 0;
}