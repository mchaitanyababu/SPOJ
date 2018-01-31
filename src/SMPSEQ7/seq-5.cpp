#include <iostream>

void READ(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];
}

int main()
{
    int n = 0;

    std::cin >> n;

    int *S = new int[n];
    READ(S, n);

    bool s1 = false, s2 = false;

    int i = 0;

    if (n == 2)
    {
        s1 = s2 = true;
    }
    else if (n > 2)
    {
        if (S[i] <= S[i + 1])
        {
            s1 = true;
            ++i;
        }
        else
        {
            while ((i < n - 1) && (S[i] > S[i + 1]))
            {
                s1 = true;
                ++i;
            }

            ++i;
        }
    }

    if (s1 && !s2)
    {
        while ((i < n - 1) && (S[i] < S[i + 1]))
        {
            s2 = true;
            ++i;
        }

        if (i != n - 1)
            s2 = false;
    }

    std::cout << ((s1 && s2) ? "Yes" : "No");

    delete[] S;

    return 0;
}