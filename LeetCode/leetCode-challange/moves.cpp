class Solution {
public:
    bool judgeCircle(string moves) {
        int left=0,right=0,up=0,down=0;
        for(auto mov:moves){
            if(mov=='L'){
                left++;
                right--;
            }else if(mov=='R'){
                right++;
                left--;
            }else if(mov=='U'){
                up++;
                down--;
            }else{
                down++;
                up--;
            }
        }
        if(left==0 && right==0 && up==0 && down==0){
            return true;
        }else{
            return false;
        }
    }
};