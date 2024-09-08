class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp=head;
        int l=0;
        while(temp){
            l++;
            temp=temp->next;
        }
        int a=l/k;
        int b=l%k;
        ListNode* curr=head;
        vector<ListNode*>ans(k,nullptr);
        for(int i=0;i<k;i++){
         
        ans[i]=curr;
        int curr_length=a+(i<b?1:0);

        for(int j=1;j<curr_length;j++){
          if(curr)
        curr=curr->next;
        }
          if(curr){
            ListNode * next=curr->next;
            curr->next=NULL;
            curr=next;
          }
        }
        return ans;

    }
};
