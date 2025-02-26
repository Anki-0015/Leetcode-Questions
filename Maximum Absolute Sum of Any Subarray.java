class Solution {
    public int maxAbsoluteSum(int[] nums) {
        
        int a = 0; // Maximum positive 
        int b = 0; // Minimum negative
        int c = 0; // Current positive sum
        int d = 0; // Current negative sum

        for (int num : nums) {
            
            c = Math.max(0, c + num); 
            a = Math.max(a, c);      

            d = Math.min(0, d + num); 
            b = Math.min(b, d);      
        }

        return Math.max(a,-b); 
    }
}
