class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            int n=temp->val;
            int n1=temp->next->val;
            int gcd=1;
            for(int i=1;i<min(n,n1);i++){
                if(n%n1==0) gcd=n1;
                if(n1%n==0) gcd=n;
                if(n%i==0 && n1%i==0){
                    gcd=max(gcd,i);
                }
            }
            ListNode* gcd_node=new ListNode(gcd);
            gcd_node->next=temp->next;
            temp->next=gcd_node;
            temp=gcd_node->next;
        }
        return head;
    }
};
