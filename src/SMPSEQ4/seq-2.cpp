#include <iostream>

using namespace std;

void READ(int *arr, unsigned short size)
{
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}

bool binsearch(int *list, int sz, int num)
{
    int s = 0, e = sz;
    int mid = -1;

    for (int i = 0; i < sz; ++i)
    {
        mid = (int)(s + e) / 2;

        if (num == list[mid])
        {
            return true;
        }
        else if (num > list[mid])
        {
            s = mid;
        }
        else
        {
            e = mid;
        }
    }

    return false;
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

    for (int i = 0; i < nS; ++i)
    {
        if (S[i] == Q[0])
        {
            cout << S[i] << " ";
            continue;
        }
        else if (S[i] < Q[0])
        {
            continue;
        }
        else
        {
            binsearch(Q, nQ, S[i]) ? (cout << S[i] << " ") : (cout << "");
        }
    }

    delete[] S;
    delete[] Q;

    return 0;
}