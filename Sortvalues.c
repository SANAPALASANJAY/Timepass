#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, temp, j, n;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int* a = (int*) malloc(n * sizeof(int));

    printf("Enter elements: ");
    for (int s = 0; s < n; s++)
    {
        scanf("%d", &a[s]);
    }

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 2 - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    for (int s = 0; s < n; s++)
    {
        printf("%d ", a[s]);
    }

    // Don't forget to free the allocated memory
    free(a);
    return 0;
}
