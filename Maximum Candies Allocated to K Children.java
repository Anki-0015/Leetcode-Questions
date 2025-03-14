class Solution {
    public int maximumCandies(int[] candies, long k) {

        long tc = 0;

        for (int pile : candies) {
            tc += pile;
        }

        if (tc < k) return 0;
        
        int left = 1;
        int right = (int) Math.min((tc / k), Integer.MAX_VALUE);

        while (left < right) {

            int mid = left + (right - left + 1) / 2;

            long cc = 0;

            for (int pile : candies) {
                cc += pile / mid;
            }

            if (cc >= k) left = mid;
            
            else right = mid - 1;
        }
        return left;
    }
}
