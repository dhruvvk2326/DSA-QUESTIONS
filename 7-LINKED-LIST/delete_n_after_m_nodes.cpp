// /****************************************************************

//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
// 	        int data;
// 	        Node *next;
// 	        Node(int data)
// 	        {
// 		        this->data = data;
// 		        this->next = NULL;
// 	        }
//         };

// *****************************************************************/

// void del(Node* &head,int &n,int &m){
// 	if (head == nullptr)
//         return;

//     Node *temp = head;

//     for (int i = 1; i < m; i++)
//     {
//         if (temp == nullptr)
//             return;
//         temp = temp->next;
//     }

//     // temp is at the mth node
//     if (temp == nullptr)
//         return;

//     Node *at_mth = temp;
// 	//cout<<"at "<<at_mth->data;
//     for (int i = 0; i < n; i++)
//     {
//         if (at_mth->next == nullptr)
//             return;
// 		//cout<<"deleted  "<<at_mth->next->data<<endl;
//         Node *del = at_mth->next;
//         at_mth->next = at_mth->next->next;

//         delete del;
//         // Note: do not move at_mth to the next node here
//     }

//     // Recursive call with the updated head and position (m)
//     del(at_mth->next, n, m);
// }

// Node *getListAfterDeleteOperation(Node *head, int n, int m)
// {
//     del(head,n,m);
// 	return head;
// }
