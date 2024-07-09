// USE MAP
// SORT
/* C++ Program to remove duplicates in an unsorted
linked list */
#include <bits/stdc++.h>
using namespace std;

/* A linked list node */
struct ListNode
{
    int data;
    struct ListNode *next;
};

// Utility function to create a new Node
struct ListNode *newNode(int data)
{
    ListNode *temp = new ListNode;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

/* Function to remove duplicates from a
unsorted linked list */
void removeDuplicates(struct ListNode *start)
{
    // Hash to store seen values
    unordered_set<int> seen;

    /* Pick elements one by one */
    struct ListNode *curr = start;
    struct ListNode *prev = NULL;
    while (curr != NULL)
    {
        // If current value is seen before
        if (seen.find(curr->data) != seen.end())
        {
            prev->next = curr->next;
            delete (curr);
        }
        else
        {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
}

/* Function to print nodes in a given linked list */
void printList(struct ListNode *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

/* Driver program to test above function */
int main()
{
    /* The constructed linked list is:
    10->12->11->11->12->11->10*/
    struct ListNode *start = newNode(10);
    start->next = newNode(12);
    start->next->next = newNode(11);
    start->next->next->next = newNode(11);
    start->next->next->next->next = newNode(12);
    start->next->next->next->next->next = newNode(11);
    start->next->next->next->next->next->next = newNode(10);

    printf("Linked list before removing duplicates : \n");
    printList(start);

    removeDuplicates(start);

    printf("\nLinked list after removing duplicates : \n");
    printList(start);

    return 0;
}
