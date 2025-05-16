class Solution {
    public int countTriples(int n) {

        int c = 0; 

        for(int i = 0; i <= n-2; i++)

            for(int j = i+1; j <= n-1; j++)
            
                for(int k = j+1; k <= n; k++){

                    if( (i*i) + (j*j) == (k*k) ) c += 2;
                }

        return c;
    }
}
