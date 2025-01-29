public class Solution extends GuessGame {
    public int guessNumber(int n) {
        
        int l = 1;                    // left
        int r = n;                    // Right
        
        while (l <= r) {

            int mid = l + (r - l) / 2;
            int result = guess(mid);
            
            if (result == 0) {
                return mid;
            }
            
            if (result == -1) {

                r = mid - 1;

            } else {

                l = mid + 1;
            }
        }
        
        return l;
    }
}
