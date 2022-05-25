#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int ctr1_103=0,ctr2_103=0;
    char str1_103[100], str2_103[100];
    int len_103, len1_103, len2_103, i_103, j_103, found_103=0, not_found_103=0;
    printf("Enter first string: ");
    gets(str1_103);
    printf("Enter second string: ");
    gets(str2_103);
    len1_103 = strlen(str1_103);
    len2_103 = strlen(str2_103);
    if(len1_103 == len2_103)
    {
        len_103 = len1_103;
        for(i_103=0; i_103<len_103; i_103++)
        {
            found_103 = 0;
            for(j_103=0; j_103<len_103; j_103++)
            {
                if(str1_103[i_103] == str2_103[j_103])
                {
                    found_103 = 1;
                    break;
                }
            }
            if(found_103 == 0)
            {
                not_found_103 = 1;
                break;
            }
        }
        if(not_found_103 == 1)
            printf("\nStrings are not written using the same letters");
        else
            printf("\nStrings are written using the same letters");
    }
    else
        printf("\nBoth string must contain same number of character for the function to check.");

    getch();

    return 0;
}