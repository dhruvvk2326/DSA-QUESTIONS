#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool is_vowel(char ch){
    ch=tolower(ch);
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';

}
int main()
{
    string str="charituyybu";
    int l=0;
    int high=str.size()-1;
    while (l<high)
    {
        if (is_vowel(str[l])&&is_vowel(str[high]) )
        {
            swap(str[l],str[high]);
            l++;
            high--;
        }
        if (is_vowel(str[l])==0)
        {
            l++;
        }
        else
        {
            high--;
        }
        
    }
    cout<<str;
    return 0;
}