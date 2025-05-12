#include<iostream>
#include<string>
using namespace std;

bool isOnlyA(const string& s)
{
    return s == "a";
}

bool isAplusBplus(const string& s)
{
    int n = s.length();
    int i = 0;

    int countA = 0;
    while (i < n && s[i] == 'a')
    {
        countA++;
        i++;
    }

    if (countA < 1) return false;

    int countB = 0;
    while (i < n && s[i] == 'b')
    {
        countB++;
        i++;
    }

    if (countB < 1) return false;

    return i == n;
}

bool isExactlyABB(const string& s)
{
    return s == "abb";
}

void testPattern(const string& s)
{
    cout << s << " - string ";
    if (isOnlyA(s))
    {
        cout << "matches : a" << endl;
    }
    else if (isAplusBplus(s))
    {
        cout << "matches : a*b+" << endl;
    }
    else if (isExactlyABB(s))
    {
        cout << "matches : abb" << endl;
    }
    else
    {
        cout << "not match" << endl;
    }
}

int main()
{
    string input;
    cout << "Enter a string to test: ";
    cin >> input;

    testPattern(input);
    return 0;
}
