class Solution {
public:
    long long minimumSteps(string s) {
        int zero=0;
        long long ans=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='0') zero++;
            else ans+=zero;
        }
        return ans;
    }
};
