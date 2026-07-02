class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int actual=0;
        int expected=n*(n+1)/2;
        for(int x:nums)
            actual +=x;
        int result=expected-actual;
        return result;
    }
};