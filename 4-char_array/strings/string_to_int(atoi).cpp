#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
    string str="   -42";
    int i=0,num=1,sign=1;
    while (i<str.size()&&str[i] == ' ')
    {
        i++;
    }
    if (str[i]=='-')
    {
        sign=-1;
    }
    while (i<str.size() && isdigit(str[i]))
    {
        if (num>INT_MAX/10)
        {
            return sign ==1 ? INT_MIN : INT_MAX;
        }
        num=num*10+(str[i]-'0');
    }
    
    return 0;
}