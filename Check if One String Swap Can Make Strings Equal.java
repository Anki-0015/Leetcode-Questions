class Solution {
    public boolean areAlmostEqual(String s1, String s2) {

        if(s1.equals(s2)) return true;
        if(s1.length() != s2.length()) return false;

        int fd = -1;
        int sd = -1;

        for(int i = 0; i < s1.length(); i++){

            if(s1.charAt(i) != s2.charAt(i)){

                if(fd == -1){
                    fd = i;
                }
                else if(sd == -1){
                    sd = i;
                }
                else{
                    return false;
                }
            }
        }

        if(fd != -1 && sd != -1){
            if (s1.charAt(fd) == s2.charAt(sd)){
                if(s1.charAt(sd) == s2.charAt(fd)){
                    return true;
                }
            }
        }

        return false;

    }
}
