class Solution {
public:
    bool hasDuplicate(vector<int>& num) 
    {
        sort(num.begin(),num.end());
        for(int i=0; i<num.size(); i++){
            if(num[i]==num[i-1]){
                return true;
            }
        }
        return false;
    }
};