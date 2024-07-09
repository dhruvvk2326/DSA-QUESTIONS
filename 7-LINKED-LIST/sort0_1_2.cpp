// /*
// Following is the class structure of the Node class:

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node()
//     {
//         this->data = 0;
//         next = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     Node(int data, Node* next)
//     {
//         this->data = data;
//         this->next = next;
//     }
// };
// */

// Node* sortList(Node *head){
//     int count_zero=0;
//     int count_one=0;
//     int count_two=0;
//     Node* curr=head;
//     while(curr!=NULL){
//         if(curr->data==0){
//             count_zero++;
//         }
//         else if(curr->data==1){
//             count_one++;
//         }
//         else {
//             count_two++;
//         }
//         curr=curr->next;
//     }
//     Node* temp=head;
//     while(count_zero>0){
//             temp->data=0;
//             count_zero--;
//         temp=temp->next;
//     }
//     while(count_one>0){
//             temp->data=1;
//             count_one--;
//         temp=temp->next;
//     }
//     while(count_two>0){
//             temp->data = 2;
//             count_two--;

//         temp=temp->next;
//     }
//     return head;
// }