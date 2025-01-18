class Solution {
    public int maxAdjacentDistance(int[] nums) {

        int a  = nums.length;
        int maxd = 0;

        for(int i = 0; i < a; i++){
            int d = Math.abs(nums[i] - nums[(i + 1) % a ]);
            maxd = Math.max(maxd , d);
        }

        return maxd;
        
    }
}
