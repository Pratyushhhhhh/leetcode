// 
class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long>ans;
        int n=nums.size();

        if(n==1){
            ans.push_back(nums[0]);
            return ans;
        }

        stack<long long>st;
        st.push(nums[0]);
        int i = 1;
        long long elem,sum;

        while(i<n){ 
            elem = nums[i];
            while(!st.empty() && elem==st.top()){
                sum=st.top()+elem;
                st.pop();
                elem = sum;
                }
            st.push(elem);
            i++;
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// also
// vector<long long>ans;
//         for(auto &x:nums)
//         {
//             long long curr=x;
//             while(!ans.empty() && curr==ans.back())
//             {
//                 curr+=ans.back();
//                 ans.pop_back();
//             }
//             ans.push_back(curr);
//         }
//         return ans;