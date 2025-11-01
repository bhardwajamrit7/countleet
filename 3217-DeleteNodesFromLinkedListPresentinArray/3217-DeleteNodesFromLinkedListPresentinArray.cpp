// Last updated: 11/1/2025, 11:41:39 PM
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st(nums.begin(),nums.end());

        while(head!=NULL && st.find(head->val)!=st.end()){
            // ListNode*  tmp=head;
            head=head->next;
            // delete(tmp);
        }
        ListNode* curr=head;
        while(curr!=NULL && curr->next!=NULL){
            if(st.find(curr->next->val)!=st.end()){
                // ListNode* temp=curr->next;
                curr->next=curr->next->next;
                // delete(temp);
            }
            else{
                curr=curr->next;    
            }
        }

        return head;
    }
};