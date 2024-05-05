/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
           if (head == nullptr || head->next == nullptr) {
      return nullptr; // Handle 0 or 1 node lists
    }
    
    ListNode *slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
      slow = slow->next;
      fast = fast->next->next;
    }
    
    ListNode *temp = head;
    while (temp->next != slow) {
      temp = temp->next;
    }
    temp->next = temp->next->next;

    return head;
    }
};