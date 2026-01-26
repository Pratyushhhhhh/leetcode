class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        int maxs=0;
        unordered_map<int,int>freq(n);
        for(auto it:arr)
        {
            freq[it]++;
        }
        for(auto [num,count]:freq)
        {
            if(num == count)
                maxs=max(maxs,count);
        }
        if(maxs == 0) return -1;
        return maxs;
    //     int maxs=0,size=0;
    //     for(int i=0;i<arr.size();i)
    //     {
    //         int n=arr[i];
    //         for(int j=i;j<arr.size();j++)
    //         {
    //             if(n==arr[j])
    //             size++;
    //         }
    //         if(size==arr[i])
    //         {
    //             
    //         }
    //         i=i+size;
    //         size=0;
    //     }
    //     if(maxs==0) return -1;
    // return maxs;
    }
};