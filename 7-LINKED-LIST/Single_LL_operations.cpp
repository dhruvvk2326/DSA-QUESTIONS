#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(ListNode *&head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}

void insert(ListNode *&head, int data)
{
    ListNode *curr = head;
    ListNode *newNode = new ListNode(data);
    if (head == NULL)
    {

        head = newNode;
    }
    else
    {
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

int main()
{
    ListNode *head = NULL;
    insert(head, 5);
    insert(head, 4);
    insert(head, 3);
    insert(head, 2);
    print(head);
    return 0;
}