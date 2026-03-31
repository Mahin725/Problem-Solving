class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>romanValue;
        romanValue['I']=1;
        romanValue['V']=5;
        romanValue['X']=10;
        romanValue['L']=50;
        romanValue['C']=100;
        romanValue['D']=500;
        romanValue['M']=1000;
        int last = romanValue[s.back()];
        int totalNum = last;
        for(int i=s.size()-2; i>=0;i--){
            if(romanValue[s[i]] < romanValue[s[i+1]]){
                totalNum -= romanValue[s[i]];
            }else{
                totalNum+= romanValue[s[i]];
            }
        }
        return totalNum;

    }
};