#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class stack
{
public:
    int top;
    int *arr;
    int size;
    stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    void push(int data)
    {
        if (size - top > 1)
        {
            arr[++top] == data;
        }
        else
        {
            cout << "overflow";
        }
    }

    void pop()
    {
        if (top > -1)
        {
            top--;
        }
        else
        {
            cout << "underflow";
        }
    }
    void top()
    {
        if (top == -1)
        {
            cout << "no data";
        }
        else
        {
            cout << arr[top];
        }
    }
};

int main()
{
    stack s(10);

    return 0;
}