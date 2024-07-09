// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;

//     Node(int _val) {
//         val = _val;
//         next = nullptr;
//         random = nullptr;
//     }
// };
// */

// class Solution
// {
// public:
//     void insert(Node *&CloneHead, Node *&CloneTail, int data)
//     {
//         Node *NewNode = new Node(data);
//         if (CloneHead == nullptr)
//         {
//             CloneHead = NewNode;
//             CloneTail = NewNode;
//         }
//         else
//         {
//             CloneTail->next = NewNode;
//             CloneTail = NewNode;
//         }
//     }

//     Node *copyRandomList(Node *head)
//     {
//         Node *temp = head;
//         Node *CloneHead = nullptr;
//         Node *CloneTail = nullptr;
//         while (temp != nullptr)
//         {
//             insert(CloneHead, CloneTail, temp->val);
//             temp = temp->next;
//         }
//         unordered_map<Node *, Node *> OldToNew;
//         temp = head;
//         Node *temp2 = CloneHead;
//         while (temp != nullptr)
//         {
//             OldToNew[temp] = temp2;
//             temp2 = temp2->next;
//             temp = temp->next;
//         }
//         temp = head;
//         temp2 = CloneHead;
//         while (temp != nullptr)
//         {
//             temp2->random = OldToNew[temp->random];
//             temp = temp->next;
//             temp2 = temp2->next;
//         }
//         return CloneHead;
//     }
// };