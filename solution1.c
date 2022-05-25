#include <stdio.h>

int series(int);

int main()
{
    int n_103,t_103,m_103;
    printf("Enter the value of N: ");
    scanf("%d", &n_103);
    if (n_103 > 2)
    {
        for (int i_103 = 1; i_103 <= n_103; i_103++)
        {
            m_103 = series(i_103);
            printf("%d ", m_103);
        }
    }
    return 0;
}

int series(int n_103)
{
    if (n_103 == 1)
    {
        return 1;
    }
    else if (n_103 == 2)
    {
        return 3;
    }
    else
    {
        return 3 * series(n_103 - 1) + 2 * series(n_103- 2);
    }
}