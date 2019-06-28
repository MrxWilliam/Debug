#include <stdio.h>
#include <string.h>

int main()
{
    char pms[3];
    char change_pms[100][2];
    int k = 0;
    int i = 0;
    int j = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%s\n", pms);

    while (scanf("%s", change_pms[k++]) != EOF)
        ;
    k--;
    for (i = 0; i < strlen(pms); i++)
    {
        if (pms[i] == 'r')
        {
            a += 4;
        }
        else if (pms[i] == 'w')
        {
            a += 2;
        }
        else
        {
            a += 1;
        }
    }

    for (i = 0; i < k; i++)
    {
        if (change_pms[i][j] == '+')
        {
            if (change_pms[i][j + 1] == 'r')
            {
                b += 4;
            }
            else if (change_pms[i][j + 1] == 'w')
            {
                b += 2;
            }
            else
            {
                b += 1;
            }
        }
        else
        {
            if (change_pms[i][j + 1] == 'r')
            {
                b -= 4;
            }
            else if (change_pms[i][j + 1] == 'w')
            {
                b -= 2;
            }
            else
            {
                b -= 1;
            }
        }
    }

    printf("%d", a + b);
    return 0;
}

