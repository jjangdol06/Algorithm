#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main(void)
{
    int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
    sort(a, a + 10, compare); // 정렬할 마지막 주소

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}