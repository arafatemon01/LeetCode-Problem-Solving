class Solution {
    int size (ListNode* head)
    {
       ListNode* temp = head;
       int count = 0;
       while (temp != NULL)
       {
        count++;
        temp = temp->next;
       }
       return count;
    }
public:
    ListNode* middleNode(ListNode* head)
    {
       int sz = size (head);
       ListNode* temp = head;
       for (int i=1;i<=sz/2;i++)
       {
        temp= temp->next;
       }
       return temp;
    }
};



/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }return slow;
    }
};
*/
