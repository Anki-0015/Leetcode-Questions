class Solution {
    public int maxScoreSightseeingPair(int[] values) {
        int ans = 0, m = values[0];
        for (int i = 1; i < values.length; i++) {
            ans = Math.max(ans, values[i] - i + m);
            m = Math.max(m, values[i] + i);
        }
        return ans;
    }
}
