class Solution {
    public boolean isIsomorphic(String s, String t) {

        if (s.length() != t.length()) return false;
        
        int[] a = new int[256];
        int[] b = new int[256];
        
        for (int i = 0; i < s.length(); i++) {
            
            char sChar = s.charAt(i);
            char tChar = t.charAt(i);
            
            if (a[sChar] != b[tChar]) return false;
            
            a[sChar] = i + 1;
            b[tChar] = i + 1;
        }
        
        return true;
    }
}
