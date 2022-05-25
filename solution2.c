#include<stdio.h>
#include<string.h>

int fun(int n_103,int m_103,int ar[][m_103]){

    int mx_103=-1;
    int index_103=-1;
    for(int i_103=0;i_103<n_103;i_103++){
        int sum_103=0;
        for(int j_103=0;j_103<m_103;j_103++){
            sum_103+=ar[i_103][j_103];
        }
        if(sum_103>mx_103){
            mx_103=sum_103;
            index_103=i_103;
        }
    }
    printf("Sum: %d",mx_103);
    return index_103;
}

int main(){
   int n_103;
   printf("Enter value of N:");
   scanf("%d",&n_103);

   int ar[n_103][n_103];
   for(int i_103=0;i_103<n_103;i_103++){
       for(int j_103=0;j_103<n_103;j_103++){
           scanf("%d",&ar[i_103][j_103]);
       }
   }

   int x_103=fun(n_103,n_103,ar);
   printf("\nIndex: %d",x_103);

    return 0;
}