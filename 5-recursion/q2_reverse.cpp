#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

string solve(string str, int start, int end){
    if(start>end){
        return str;
    }
    
    swap(str[start],str[end]);
    
    return solve(str,start+1,end-1);
}

int main(){
    string str="dhruv";

    int start=0;
    int end=str.size();
    cout<< solve(str,start,end-1);
    return 0;
}