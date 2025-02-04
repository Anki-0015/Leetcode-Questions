class Solution {
    public String smallestNumber(String pattern) {

        int n = pattern.length();
        int num[] = new int[n + 1];
        int next = 1;

        for (int i = 0; i <= n; i++) {

            if (i == n || pattern.charAt(i) == 'I') {

                num[i] = next++;

                for (int j = i - 1; j >= 0 && pattern.charAt(j) != 'I' ; j--) {

                    num[j] = next++;
                }
            }
        }

        StringBuilder sb = new StringBuilder();

        for (int i = 0; i <= n; i++) {
            sb.append(num[i]);
        }
        return sb.toString();
    }
}
