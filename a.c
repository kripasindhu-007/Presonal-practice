#include<stdio.h>
int twoArrayCompare(int a_043[],int b_043[],int n_043){
    n_043=26;
    for(int i_043=0;i_043<26;i_043++){
        if(a_043[i_043]!=b_043[i_043])return 0;
    }
    return 1;
}
int main(){
    char str1_043[40],str2_043[40];
    printf("Enter first string: \n");
    gets(str1_043);
    printf("Enter second string: \n");
    gets(str2_043);
int a1_043[26]={0};
int a2_043[26]={0};

for(int i_043=0;str1_043[i_043]!='\0';i_043++){
    if(str1_043[i_043]==' ')continue;
    else if(str1_043[i_043]>='a' && str1_043[i_043]<='z'){
        a1_043[str1_043[i_043]-97]=1;
        }
        else if(str1_043[i_043]>='A' && str1_043[i_043]<='Z'){
            a1_043[str1_043[i_043]-97 +32 ]=1;
        }
    }
    
    for(int i_043=0;str2_043[i_043]!='\0';i_043++){
    if(str2_043[i_043]==' ')continue;
    else if(str2_043[i_043]>='a' && str2_043[i_043]<='z'){
        a2_043[str2_043[i_043]-97]=1;
        }
        else if(str2_043[i_043]>='A' && str2_043[i_043]<='Z'){
            a2_043[str2_043[i_043]-97 +32 ]=1;
        }
    }

    if(twoArrayCompare(a1_043,a2_043,26))
    printf("\"%s\" and \"%s\" are written using the same letters",str1_043,str2_043);
    else printf("\"%s\" and \"%s\" are not written using the same letters",str1_043,str2_043);
}