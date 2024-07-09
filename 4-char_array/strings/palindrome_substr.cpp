#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int pal(string& ip,int i,int j){
    int count=0;
    while ((ip[i]==ip[j]) && (i>=0) && (j<ip.length()))
    {
            i--;
            j++;
            count++;
    }

    return count;
}


int main()
{
    // noon
    //  https://leetcode.com/problems/palindromic-substrings/description/
    string ip="noon";
    int total=0;
    for (int i = 0; i < ip.length(); i++)
    {
        int n1=pal(ip,i,i);
        int n2=pal(ip,i,i+1);
        total=total+n1+n2;
    }
    
    
    cout<<total;
    return 0;
}