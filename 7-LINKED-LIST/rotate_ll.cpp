// Node* rotate(Node* head, int k) {
//     if (head == nullptr || head->next == nullptr) return head;

//     // Calculate the length of the linked list
//     int len = length(head);

//     // Calculate the actual rotation amount
//     int actual_k = k % len;

//     // If actual_k is 0, no rotation is needed
//     if (actual_k == 0) return head;

//     // Find the new head and the new tail after rotation
//     Node* new_tail = head;
//     for (int i = 0; i < len - actual_k - 1; i++) {
//         new_tail = new_tail->next;
//     }

//     Node* new_head = new_tail->next;
//     new_tail->next = nullptr; // Disconnect the new tail from the list

//     // Connect the original head to the original tail to form a circular list
//     Node* temp = new_head;
//     while (temp->next != nullptr) {
//         temp = temp->next;
//     }
//     temp->next = head;

//     return new_head;
// }
