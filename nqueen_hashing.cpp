class Solution {
    private:
    void solve(int c,vector<vector<string>>&ans,vector<string>&board,int n,vector<int>&left,vector<int>&upper,vector<int>&lower)
    {
        if(c==n)
        {
            ans.push_back(board);
            return;
        }
        for(int r=0;r<n;r++)
        {
            if(left[r]==0&&upper[(n-1)+(c-r)]==0&&lower[r+c]==0){ 
                left[r]=1;
                upper[(n-1)+(c-r)]=1;
                lower[r+c]=1;
                board[r][c]='Q';
                solve(c+1,ans,board,n,left,upper,lower);
                board[r][c]='.';
                left[r]=0;
                upper[(n-1)+(c-r)]=0;
                lower[r+c]=0;
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        vector<int>left(n);
        vector<int>lower(2*n-1);
        vector<int>upper(2*n-1);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;
        solve(0,ans,board,n,left,upper,lower);
        return ans;
    }
};