class Solution {
    private:
    bool check(int row,int col,vector<string>&board,int n)
    {
        //up dia
        int tempr=row;
        int tempc=col;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        //left
        row=tempr;
        col=tempc;
        while(col>=0)
        {
            if(board[row][col]=='Q') return false;
            col--;
        }
        //low dia
        row=tempr;
        col=tempc;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    }

    void solve(int c,vector<vector<string>>&ans,vector<string>&board,int n)
    {
        if(c==n)
        {
            ans.push_back(board);
            return;
        }
        for(int r=0;r<n;r++)
        {
            if(check(r,c,board,n)){ 
                board[r][c]='Q';
                solve(c+1,ans,board,n);
                board[r][c]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;
        solve(0,ans,board,n);
        return ans;
    }
};