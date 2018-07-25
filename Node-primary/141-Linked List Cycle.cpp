//
class Solution {
public:
    bool hasCycle(ListNode *head) {
         ListNode *poi1=head, *poi2=head;
         while(poi2 && poi2->next){
            poi1 = poi1->next;
            poi2 = poi2->next->next;
            if(poi1 == poi2) return true;
        }
        return false;
    }
};
