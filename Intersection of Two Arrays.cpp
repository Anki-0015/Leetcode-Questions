class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
         int i=0,j=0;
         while( j<nums2.size() && i<nums1.size()){
            if( i+1<nums1.size()&& nums1[i]==nums1[i+1]){
                i++;
            }
            else if(j+1<nums2.size() && nums2[j]==nums2[j+1]){
                j++;
            }
            else if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
             else if(nums1[i]<nums2[j]){
                i++;
            }
            }
         
            return ans;
             }
};
