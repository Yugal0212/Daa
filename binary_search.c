#include <stdio.h>
#include <stdlib.h>

int binsearch(int[], int, int, int);

void main()
{
    int num, i, key, position;
    int low, high, list[100];

    printf("Enter the total number of elements: ");
    scanf("%d", &num);

    printf("\nEnter the elements of list (sorted order):\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &list[i]);
    }

    // Check whether input array is sorted
    for (i = 1; i < num; i++)
    {
        if (list[i] < list[i - 1])
        {
            printf("Given input is not sorted\n");
            exit(0);   // terminate if not sorted
        }
    }

    low = 0;
    high = num - 1;

    printf("\nEnter element to be searched: ");
    scanf("%d", &key);

    position = binsearch(list, key, low, high);

    if (position != -1)
    {
        printf("\nNumber present at position %d", (position + 1)); // 1-based index
    }
    else
    {
        printf("\nThe number is not present in the list");
    }
}

int binsearch(int a[], int x, int low, int high)
{
    int mid;

    if (low > high)
        return -1;

    mid = (low + high) / 2;

    if (x == a[mid])
    {
        return mid;
    }
    else if (x < a[mid])
    {
        return binsearch(a, x, low, mid - 1);   // ✅ return added
    }
    else
    {
        return binsearch(a, x, mid + 1, high);  // ✅ return added
    }
}

