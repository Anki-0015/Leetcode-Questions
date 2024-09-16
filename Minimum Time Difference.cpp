class Solution {
public:
    int timeToMinutes(const string& time){
        int hrs= stoi(time.substr(0,2)); 
        int mins= stoi(time.substr(3,2));
        return hrs*60 + mins;
    }

    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        if(n>1440){
            return 0;
        }

        vector<int> in_minutes;
        for(const string& point : timePoints){
            in_minutes.push_back(timeToMinutes(point));
        }

        sort(in_minutes.begin(), in_minutes.end());

        int min_diff=1440;
        for(int i=1;i<n;i++){
            min_diff=min(min_diff, in_minutes[i]-in_minutes[i-1]);
        }

        int first_last_diff= 1440 - in_minutes.back() +in_minutes[0];
        min_diff= min(min_diff, first_last_diff);

        return min_diff;
    }
};
