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
        cout << temp->data << " ";
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

void middle(ListNode *&head)
{
    ListNode *slow = head;
    ListNode *fast = head->next;
    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        fast = fast->next;
        fast = fast->next;
        slow = slow->next;
    }
    cout << slow->data;
}

ListNode *reverse(ListNode *head)
{
    ListNode *temp = NULL;
    ListNode *curr = head;
    ListNode *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = temp;
        temp = curr;
        curr = forward;
    }
    head = temp;
    return head;
}

int length(ListNode *&head)
{
    ListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

ListNode *reverse_k(ListNode *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }

    int len = length(head);
    if (k > len)
    {
        return head;
    }
    ListNode *temp = NULL;
    ListNode *curr = head;
    ListNode *forward = NULL;
    int count = 0;
    while (count < k)
    {
        forward = curr->next;
        curr->next = temp;
        temp = curr;
        curr = forward;
        count++;
    }
    if (forward != NULL)
    {
        head->next = reverse_k(forward, k);
    }

    return temp;
}

int main()
{
    ListNode *head = NULL;
    insert(head, 5);
    insert(head, 4);
    insert(head, 3);
    insert(head, 10);
    insert(head, 6);
    insert(head, 8);
    print(head);
    cout << endl;
    int k = 4;
    head = reverse_k(head, k);
    print(head);
    return 0;
}