class Solution {
    public int distributeCandies(int n, int limit) {

        int total = cal(n);

        int a = 3 * cal (n - limit - 1);
        int b = 3 * cal (n - 2 * limit - 2);
        int c = cal (n - 3 * limit - 3);

        return total -  a + b - c;
    }

    private int cal(int candies) {

        if (candies < 0) {
            return 0;
        }
        return (candies + 1) * (candies + 2) / 2;
    }
}
