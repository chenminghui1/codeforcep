#include "bits/stdc++.h"
#define main4c main
using namespace std;
int main4c() {
    int n{};
    cin >> n;
    unordered_set<string> s;
    for (int i{ 0 }; i < n; i++)
    {
        string s1;
        cin >> s1;
        if (s.find(s1) == s.end())
            cout << "OK" << endl;
        else
            s.insert(s1);
    }
    return 0;
};