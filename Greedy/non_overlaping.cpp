class Solution {
public:
    static bool comparator(vector<int>& value1,vector<int>& value2) {
        return value1[1] < value2[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;

        sort(intervals.begin(), intervals.end(), comparator);

        int cnt = 0;
        int lastEnd = intervals[0][1]; 

        for (int i = 1; i < intervals.size(); ++i) 
        {
            if (intervals[i][0] < lastEnd) {
                cnt++; 
            } else {
                lastEnd = intervals[i][1]; 
            }
        }
        
        return cnt;  
        }
};
