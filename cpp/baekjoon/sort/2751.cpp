// #include <stdio.h>

// int n, data[10000000];

// void quickSort(int* data, int start, int end)
// {
//     if(start>=end){
//         return;
//     }
//     int i, j, key, temp;
//     while (i <= j)
//     {
//         key = start;
//         i = start + 1;
//         j = end;
//         while (data[i] <= data[key])
//         {
//             i++;
//         }
//         while (data[j] > data[key] && j > start)
//         {
//             j--;
//         }
//         if (i > j)
//         {
//             temp = data[j];
//             data[j] = data[key];
//             data[key] = temp;
//         }
//         else
//         {
//             temp = data[i];
//             data[i] = data[j];
//             data[j] = temp;
//         }
//     }
//     quickSort(data, start, j - 1);
//     quickSort(data, j + 1, end);
// }

// int main(void)
// {
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &data[i]);
//     }
//     quickSort(data, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", data[i]);
//     }
//     return 0;
// }

#include <stdio.h>
#include <algorithm>

int n, data[10000000];

int main(void)
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }
    std::sort(data, data + n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", data[i]);
    }
    return 0;
}