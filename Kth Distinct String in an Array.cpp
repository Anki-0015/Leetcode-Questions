class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        unordered_map<string, int> mp;
        for(auto &ele : arr) mp[ele]++;
        
        for(auto &ele : arr){
            if(mp[ele] == 1){
                k--;
            }
            if(k == 0) return ele;
        }
        return "";
    }
};
