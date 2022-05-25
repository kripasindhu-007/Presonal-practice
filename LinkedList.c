#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
    
};

void print_list(struct node *head){
    if(head==NULL)
    printf("\nList is empty.");
    
        struct node *p=NULL;
        p=head;
        while(p!=NULL){
            printf("%d -> ",p->data);
            p=p->next;
        }
        printf("NULL");
    
}

int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=143;
    head->next=NULL;

    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=341;
    ptr->next=NULL;
    head->next=ptr;

    print_list(head);
    return 0;
}