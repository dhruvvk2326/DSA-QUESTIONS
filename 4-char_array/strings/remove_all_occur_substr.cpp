#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    string ip = "daabcbaabcbc";
    string str = "abc";
    int pos = ip.find(str);
    while (pos != string::npos)
    {
        ip.erase(pos, str.length());
        pos = ip.find(str);
    }
    cout << ip;
    return 0;
}