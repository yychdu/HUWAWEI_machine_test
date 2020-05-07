


struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* h = NULL;
        for(ListNode* p = pHead; p; ){
            ListNode* tmp = p -> next;
            p -> next = h;
            h = p;
            p = tmp;
        }
        return h;
    }
};