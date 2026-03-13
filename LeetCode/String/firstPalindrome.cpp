class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string word:words)
        {
            int i=0,j=word.size()-1;
            bool found = true;
            while(i<j){
                if(word[i] !=word[j]){
                    found = false;
                    break;
                }else{
                    i++;
                    j--;
                }
            }
            if(found){
                return word;
            }
        }
        return "";
    }
};