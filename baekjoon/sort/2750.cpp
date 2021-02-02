#include <stdio.h>

int main(void)
{

    int array[1001];
    int n, i, j, temp, min, index;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        min = 1001;
        for (j = i; j < n; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}