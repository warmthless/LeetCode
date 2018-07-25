//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if(!head || !head->next) return true;        
        int count=1;
        ListNode *cntTmp = head;
        while(cntTmp->next){
            count++;
            cntTmp=cntTmp->next;
        }
        ListNode *par1 = head;
        for(int i=0; i<(count/2 + count%2); ++i){
            par1=par1->next;
        }
        ListNode *dummy = new ListNode(-1);
        ListNode *cur = head;
        dummy->next = head;
        for(int i=0; i< (count/2 - 1); ++i){
            ListNode *tmp = cur ->next;
            cur->next = tmp->next;
            tmp->next = dummy->next;
            dummy->next=tmp;
        }
        ListNode *par2 = dummy->next;
        for(int i=0; i<count/2; ++i){
            if(par2->next){
           if((par1->val) != (par2->val)) return false; 
           else {
                par1 = par1->next;
                par2 = par2->next;
                //if(par2->next == NULL) return true;
            }
        }   
        }

        return true;
    }
};
//
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *last = slow->next, *pre = head;
        while (last->next) {
            ListNode *tmp = last->next;
            last->next = tmp->next;
            tmp->next = slow->next;
            slow->next = tmp;
        }
        while (slow->next) {
            slow = slow->next;
            if (pre->val != slow->val) return false;
            pre = pre->next;
        }
        return true;
    }
};
