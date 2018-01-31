#include <iostream>

void READ(int *arr, unsigned short size)
{
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];
}

void print(int *list, int sz)
{
    for (int k = 0; k < sz; ++k)
    {
        std::cout << list[k] << " ";
    }
}

int sumX(int *list, int sz)
{
    int sumx = 0;

    for (int j = 0; j < sz; ++j)
    {
        sumx += list[j];
    }

    return sumx;
}

int main()
{
    int n = 0, m = 0;

    std::cin >> n;
    int *S = new int[n];
    READ(S, n);

    std::cin >> m;
    int *Q = new int[m];
    READ(Q, m);

    int sumS = 0, sumQ = 0;
    int i = 0;

    while (i < n && i < m)
    {
        sumS += S[i];
        sumQ += Q[i];

        ++i;
    }

    if (n > m)
    {
        sumS += sumX((S + i), (n - i));
    }
    else if (n < m)
    {
        sumQ += sumX((Q + i), (m - i));
    }

    std::cout << std::endl;

    if (sumQ < sumS)
    {
        print(S, n);
    }
    else
    {
        print(Q, m);
    }

    delete[] S;
    delete[] Q;

    return 0;
}