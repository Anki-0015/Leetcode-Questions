class Solution {
    public int findTargetSumWays(int[] n, int t) {
        return countWays(n, t, 0, 0);
    }

    private int countWays(int[] n, int t, int i, int s) {
        if (i == n.length) return s == t ? 1 : 0;
        return countWays(n, t, i + 1, s + n[i])
             + countWays(n, t, i + 1, s - n[i]);
    }
}
