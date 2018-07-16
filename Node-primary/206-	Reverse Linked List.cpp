//迭代
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;;
        ListNode *dummy = new ListNode(-1);
        dummy->next=head;
        ListNode *cur=head;
        while(cur->next) {
            ListNode *tmp=cur->next;
            cur->next=tmp->next;
            tmp->next=dummy->next;
            dummy->next=tmp;
        }
        return dummy->next;
        
    }
};
//递归
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *p = head;
        head = reverseList(p->next);
        p->next->next = p;
        p->next = NULL;
        return head;
    }
};
