class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumOfSingle=0;
        int sumOfdouble=0;
        for(auto num:nums){
            if(num>=10){
                sumOfdouble+=num;
            }else{
                sumOfSingle+=num;
            }
        }
        if(sumOfSingle!=sumOfdouble){
            return true;
        }else{
            return false;
        }

    }
};