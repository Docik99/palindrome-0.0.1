#include <iostream>

using namespace std;

int main()
{
    int len, k, r;
    string str;

    cin >> str;
    len = str.length();
    for (int i = 0; i <= len / 2 - 1; i++)
    {
        if (str[i] == str[len - i - 1])
        {
            k = k + 1;
        }
    }

    if (k == len / 2)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    return 0;
}
