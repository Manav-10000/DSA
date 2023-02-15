//Set Kth bit
//https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1
class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        int mask=1<<K;
        int ans=N|mask;
        return ans;
    }
    
};

// gfg answer