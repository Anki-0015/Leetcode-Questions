class Solution {
    public int[] getConcatenation(int[] nums) {
        int length = nums.length;
        int output[] = new int[2 * length];
        
        System.arraycopy(nums, 0, output, 0, length);
        System.arraycopy(nums, 0, output, length, length);
        
        return output;
    }
}
