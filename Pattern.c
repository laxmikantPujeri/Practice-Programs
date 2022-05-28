#include <stdio.h>

int main()
{
    int i, j;


    for(i=1; i<=5; i++)
    {
        // Prints the first part of the pattern
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        // Prints the second part of the pattern
        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}