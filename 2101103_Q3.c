#define SIZE 50
#include <string.h>
#include <ctype.h>
#include <stdio.h>


char s[SIZE];
int top = -1;

push(char elem)
{
    s[++top] = elem;
}

char pop()
{
    return (s[top--]);
}

int pr(char elem)
{
    switch (elem)
    {
    case '#':
        return 0;
    case ')':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 3;
    }
}
int main()
{
    char inx[50], prx[50], ch, elem;
    int i = 0, k = 0;
    printf("\nEnter the  Expression ?\n ");
    scanf("%s", inx);
    push('#');
    strrev(inx);
    while ((ch = inx[i++]) != '\0')
    {
        if (ch == ')')
            push(ch);
        else if (isalnum(ch))
            prx[k++] = ch;
        else if (ch == '(')
        {
            while (s[top] != ')')
                prx[k++] = pop();
            elem = pop();
        }
        else
        {
            while (pr(s[top]) >= pr(ch))
                prx[k++] = pop();
            push(ch);
        }
    }
    while (s[top] != '#')
        prx[k++] = pop();
    prx[k] = '\0';
    strrev(prx);
    strrev(inx);
    printf("\n\nGiven  Expression: %s \nPrefix Expression: %s\n", inx, prx);
}