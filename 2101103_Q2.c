#include <stdbool.h>
 #include <stdio.h>
bool is_Balanced(char exp[])
{
    bool flag = true;
    int count = 0;
    for (int i = 0; exp[i] != '\0'; i++) {

        if (exp[i] == '(') {
            count++;
        }
        else {
            count--;
        }
        if (count < 0) {
            flag = false;
            break;
        }
    }
    if (count != 0) {
        flag = false;
    }

    return flag;
}
int main()
{
    char str[100];
    printf("Enter the parenthesis:\n ");
    scanf("%s",&str);

    if (is_Balanced(str)){
        printf("The parenthesis are well formed\n");
    }
    else{
        printf("The parenthesis aren't well formed\n");
    }
    return 0;
}