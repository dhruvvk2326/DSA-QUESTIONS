#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool palindrome(string& s,int i , int j){
    while (i<=j)
    {
        if (s[i]==s[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
    
}
int main()
{
    // i 0 se compare karge  with j jahan alag baaki ka compare karna hai
    // https://leetcode.com/problems/valid-palindrome-ii/description/
    string str="malayalxam";
    int i=0;
    bool flag=0;
    int j=str.size()-1;
    while (i<=j)
    {
        if (str[i]==str[j])
        {
            i++;
            j--;
        }
        else
        {
            flag=(palindrome(str,i+1,j) || palindrome(str,i,j-1));
            break;
        }
    }
    if (flag==true)
    {
        cout<<"valid";
    }
    else
    {
        cout<<"not valid";
    }

    return 0;
}