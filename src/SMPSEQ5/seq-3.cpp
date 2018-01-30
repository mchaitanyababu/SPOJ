#include <iostream>

using namespace std;

void READ(int *arr, unsigned short size)
{
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}

int main()
{
    int nS = 0, nQ = 0;

    cin >> nS;
    int *S = new int[nS];
    READ(S, nS);

    cin >> nQ;
    int *Q = new int[nQ];
    READ(Q, nQ);

    for (int i = 0; i < nS && i < nQ; ++i)
    {
        if (S[i] == Q[i])
            cout << (i + 1) << " ";
    }

    delete[] S;
    delete[] Q;

    return 0;
}