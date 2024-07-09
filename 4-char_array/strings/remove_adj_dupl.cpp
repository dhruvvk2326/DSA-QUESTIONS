#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    //push in ans but if incoming is same as last pop the ans
    string input="abbaca";
    string ans="";
    int i=0;
    while (i<input.length())
    {
        if (ans.length()==0)
        {
            ans.push_back(input[i]);
            i++;
        }
        if (ans[ans.length()-1]==input[i])
        {
            ans.pop_back();
            i++;
        }
        else
        {
            ans.push_back(input[i]);
            i++;
        }
    }
    cout<<ans;
    return 0;
}