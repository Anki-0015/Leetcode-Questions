class Solution {
    public int maxChunksToSorted(int[] arr) {
        int count = 0, max = 0;
        for (int i = 0; i < arr.length; i++) {
            if ((max = Math.max(max, arr[i])) == i) count++;
        }
        return count;
    }
}
