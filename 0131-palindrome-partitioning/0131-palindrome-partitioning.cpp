class Solution {
public:
    bool isPalindrome(string s){
        for(int i=0, j=s.size()-1; i<=j; i++, j--){
            if(s[i]!=s[j]){
                return false;
            }
        }
        return true;
    }

    void helper(string s, vector<vector<string>>& result, vector<string> temp){
        if(s.size()==0){
            result.push_back(temp);
        }
        for(int i=0; i<s.size(); i++){
            string leftpar=s.substr(0, i+1);
            if(isPalindrome(leftpar)){
                temp.push_back(leftpar);
                helper(s.substr(i+1), result, temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        vector<vector<string>> result;
        helper(s, result, temp);
        return result; 
    }

};