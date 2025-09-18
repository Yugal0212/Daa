#include <stdio.h>

void main()
{
    int arr[100], n, i, j, minj, minx, temp;

    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

    printf("\nEnter %d Numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for (i = 0; i < n; i++)
    {
        minj = i;
        minx = arr[i];

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < minx)
            {
                minj = j;
                minx = arr[j];
            }
        }

        // Swap arr[minj] and arr[i]
        temp = arr[minj];
        arr[minj] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
