class Solution {
    public String repeatLimitedString(String s, int repeatLimit) {
        int[] alph = new int[26];
        for(int i = 0; i < s.length(); i ++){ alph[26-(int)(s.charAt(i)-'a')-1] ++; }
        int prev = -1; int count = 0;
        StringBuffer str = new StringBuffer();
		
        for(int j = 0; j < s.length(); j ++){
            for(int i = 0; i < 26; i ++){
                if(alph[i] != 0 && (prev != i || count < repeatLimit)){
                    if(prev != i){count = 1;}
					else{count ++;}
                    prev = i;
                    alph[i] --;
                    str.append((char)('a' + 25-i));
                    break;
                }
            }
        }
        return str.toString();    
    }
}
