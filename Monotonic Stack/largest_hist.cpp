class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        int ans=INT_MIN;
        int pse=-1,nse,ele;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                nse=i;
                ele=st.top();
                st.pop();
                pse=st.empty()?-1:st.top();
                ans=max(heights[ele]*(nse-pse-1),ans);
            }
            st.push(i);
        }
            while(!st.empty())
            {
                nse=n;
                ele=st.top();
                st.pop();
                pse=st.empty()?-1:st.top();
                ans=max(heights[ele]*(nse-pse-1),ans);
            }
        
        return ans;
    }
};