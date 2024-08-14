class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n=nums.size(), start=0, end=nums[n-1]-nums[0];
        while(start<=end){
            int  mid=start+(end-start)/2;
            int count=0, s=0, e=0;
            while(e<n){
                while(nums[e]-nums[s] > mid and s<n) s++;
                count+=(e-s);
                e++;
            }
            if(count>=k) end=mid-1;
            else start=mid+1;
        }
    return start;
    }
};
