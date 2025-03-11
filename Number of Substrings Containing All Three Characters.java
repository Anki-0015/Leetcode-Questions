class Solution {
    public int numberOfSubstrings(String s) {

        int a = -1, b = -1, c = -1 , count = 0;

        for(int i = 0; i < s.length(); i++){
            
            if(s.charAt(i) == 'a') a = i;
            if(s.charAt(i) == 'b') b = i;
            if(s.charAt(i) == 'c') c = i;

            count += Math.min(Math.min(a,b) , c) + 1;
        }
        
        return count;
    }
}
