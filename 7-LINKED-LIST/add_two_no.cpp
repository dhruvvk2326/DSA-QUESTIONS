// // /**
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode() : val(0), next(nullptr) {}
// //  *     ListNode(int x) : val(x), next(nullptr) {}
// //  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// //  * };
// //  */
// // class Solution {
// // public:
// //     ListNode* reverse(ListNode* head){
// //         if(head==NULL || head->next==NULL) return head;
// //         ListNode* prev=NULL;
// //         ListNode* current=head;
// //         ListNode* forward=NULL;
// //         while(current!=NULL){
// //             forward=current->next;
// //             current->next=prev;
// //             prev=current;
// //             current=forward;
// //         }
// //         return prev;
// //     }

// //     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
// //         ListNode* ansHead=NULL;
// //         ListNode* ansTail=NULL;
// //         int carry=0;
// //         while(l1!=NULL && l2!=NULL){
// //             int sum=carry+l1->val+l2->val;
// //             int digit=sum%10;
// //             carry=sum/10;
// //             ListNode*  newNode=new ListNode(digit);
// //             if(ansHead==NULL){
// //                 ansHead=newNode;
// //                 ansTail=newNode;
// //             }
// //             else{
// //                 ansTail->next=newNode;
// //                 ansTail=newNode;
// //             }
// //             l1=l1->next;
// //             l2=l2->next;
// //         }
// //         while(l1!=NULL){
// //             int sum=carry+l1->val;
// //             int digit=sum%10;
// //             carry=sum/10;
// //             ListNode*  newNode=new ListNode(digit);
// //             ansTail->next=newNode;
// //             ansTail=newNode;
// //             l1=l1->next;
// //         }
// //         while(l2!=NULL){
// //             int sum=carry+l2->val;
// //             int digit=sum%10;
// //             carry=sum/10;
// //             ListNode*  newNode=new ListNode(digit);
// //             ansTail->next=newNode;
// //             ansTail=newNode;
// //             l2=l2->next;
// //         }
// //         while (carry != 0) {
// //         int digit = carry % 10;
// //         carry = carry / 10;
// //         ListNode* newNode = new ListNode(digit);
// //         ansTail->next = newNode;
// //         ansTail = newNode;
// //         }

// //         return ansHead;
// //     }
// // };

// // OPTIMISED
// class Solution
// {
//     private:
//     Node* reverse(Node* head) {

//         Node* curr = head;
//         Node* prev = NULL;
//         Node* next = NULL;

//         while(curr != NULL) {
//             next = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }

//     void insertAtTail(struct Node* &head, struct Node* &tail, int val) {

//         Node* temp = new Node(val);
//         //empty list
//         if(head == NULL) {
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else
//         {
//             tail -> next = temp;
//             tail = temp;
//         }
//     }

//     struct Node* add(struct Node* first, struct Node* second) {
//         int carry = 0;

//         Node* ansHead = NULL;
//         Node* ansTail = NULL;

//         while(first != NULL || second != NULL || carry != 0) {

//             int val1 = 0;
//             if(first != NULL)
//                 val1 = first -> data;

//             int val2 = 0;
//             if(second !=NULL)
//                 val2 = second -> data;

//             int sum = carry + val1 + val2;

//             int digit = sum%10;

//             //create node and add in answer Linked List
//             insertAtTail(ansHead, ansTail, digit);

//             carry = sum/10;
//             if(first != NULL)
//                 first = first -> next;

//             if(second != NULL)
//                 second = second -> next;
//         }
//         return ansHead;
//     }
//     public:
//     //Function to add two numbers represented by linked list.
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         //step 1 -  reverse input LL
//         first = reverse(first);
//         second = reverse(second);

//         //step2 - add 2 LL
//         Node* ans = add(first, second);

//         //step 3
//         ans = reverse(ans);

//         return ans;
//     }
// };