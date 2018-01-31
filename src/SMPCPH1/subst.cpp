#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    int nS = 0, nT = 0;
    unordered_map<char, short> mp;

    cin >> nS;

    char *str = new char[nS];

    for (int i = 0; i < nS; i++)
    {
        cin >> str[i];
        mp.insert({str[i], i});
    }

    cin >> nT;

    cin.ignore();

    while (nT--)
    {
        string s;

        getline(cin, s);

        for (int i = 0; i < s.size(); i++)
        {
            auto el = mp.find(s[i]);

            if (el != mp.end())
            {
                short pos = el->second + 1;

                if (pos >= nS)
                    pos = 0;

                s.replace(i, 1, 1, str[pos]);
            }
        }

        cout << s << endl;
    }

    delete[] str;

    return 0;
}