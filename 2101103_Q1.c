#include<stdio.h>
#include<conio.h>
#define max 100
int stack1[max],top1=-1;
int stack2[max],top2=-1;
int temp[max],t=-1;
void create()
{
    char ch;
    do
    {

        top1++;
        printf("Enter the number  \n");
        scanf("%d",&stack1[top1]);
        printf("Continue(y/n)  \n ");
        ch=getch();

    }
    while(ch=='y');
}
void first()
{
    int i;
    printf("First Stack is: \n");
    for(i=top1;i>=0;i--)
    {
        printf("%d ",stack1[i]);
    }

}
void second()
{
    int i;
    printf("\nSecond stack is: \n");
    for(i=top2;i>=0;i--)
    {

        printf("%d ",stack2[i]);
    }
}

void copy()
{

    int i;
    for(i=top1;i>=0;i--)
    {
        t++;
        temp[t]=stack1[i];
    }
    for(i=t;i>=0;i--)
    {

        top2++;
        stack2[top2]=temp[i];
    }
}
void main()
{

    create();
    first();
    copy();
    second();
    getch();
}
