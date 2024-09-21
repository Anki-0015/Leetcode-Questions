class Solution {
public:
    void func(int number, vector<int>& answer, int& limit) {
        answer.push_back(number);
        for (int i = 0; i <= 9; i++) {
            string str = "";
            str += to_string(number);
            str += to_string(i);
            int temp = stoi(str);
            if (temp <= limit) {
                func(temp, answer, limit);
            }
            else
            {
                return ;
            }
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> answer;
        for (int i = 1; i <= 9 && i <= n; i++) 
        {
            func(i,answer,n);
        }
        return answer;
    }
};
