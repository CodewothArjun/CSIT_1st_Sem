#include <stdio.h>
#include <conio.h>
void main()
{
    int a, i, c, j, d;
    do
    {
        printf("Enter how many prime number you want ");
        scanf("%d", &a);
        printf("prime number of 1 to %d", a);

        for (i = 1; i <= a; i++)
        {
            c = 0;
            for (j = 1; j <= i; j++)
            {

                if (i % j == 0)
                {
                    c = c + 1;
                }
            }
            if (c == 2)
            {
                printf("\n %d", i);
            }
        }

        printf("if you want to more then prss (1)");
        scanf("%d", &d);
    } while (d <= 1);
    getch();
}