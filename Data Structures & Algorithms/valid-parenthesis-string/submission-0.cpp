class Solution {
public:
    bool checkValidString(string s) {

        int low = 0;   // Minimum possible open brackets
        int high = 0;  // Maximum possible open brackets

        for(char c : s){

            if(c == '('){
                low++;
                high++;
            }
            else if(c == ')'){
                low--;
                high--;
            }
            else{ // '*'
                low--;   // Treat '*' as ')'
                high++;  // Treat '*' as '('
            }

            // If even the maximum possible opens are negative,
            // too many ')' have appeared.
            if(high < 0)
                return false;

            // Minimum opens can't be negative.
            low = max(low, 0);
        }

        // String is valid only if we can end with 0 open brackets.
        return low == 0;
    }
};