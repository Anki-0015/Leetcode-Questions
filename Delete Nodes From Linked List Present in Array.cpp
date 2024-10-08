class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>st;
        for(auto it : nums){
            st[it]++;
        }
        ListNode* curr=head;
        ListNode* prev=head;
        while(curr!=nullptr){
            if(st[curr->val]>0){
                if(prev==curr){
                    if(head==curr){
                        head=head->next;
                    }
                    curr=curr->next;
                    prev=curr;
                }
                else{
                    curr=curr->next;
                    prev->next=curr;
                }
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};
