class Solution {
public:
    int maximumLength(string s) {
        int cnt[26][52] = {0};
        int i = 0;

        while(i < s.length()) {
            char ch = s[i];
            int c = 0;
            while(i < s.length() && s[i] == ch) c++, i++;
            cnt[ch - 'a'][c]++;
        }

        int ans = -1;
        for(int i = 0 ; i < 26 ; i++) {
            for(int j = 50 ; j >= 1 ; j--) {
                if(cnt[i][j + 1] > 0) cnt[i][j] += cnt[i][j + 1] + 1;
                if(cnt[i][j] >= 3) ans = max(ans, j);
            }
        }
        return ans;
    }
};
