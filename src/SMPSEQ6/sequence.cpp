#include <iostream>

void READ(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];
}

bool search(int *list, int sz, int num)
{
    for (int i = 0; i < sz; ++i)
    {
        if (num == list[i])
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n = 0, x = 0;

    std::cin >> n >> x;

    int *S = new int[n];
    READ(S, n);

    int *Q = new int[n];
    READ(Q, n);

    int h = 0, l = 0;

    for (int i = 0; i < n; ++i)
    {
        l = i - x;
        h = i + x;

        if (l < 0)
            l = 0;
        if (h >= n)
            h = n - 1;

        search((Q + l), (h - l) + 1, S[i]) ? std::cout << (i + 1) << " " : std::cout << "";
    }

    delete[] S;
    delete[] Q;

    return 0;
}