class Solution {
public:
    int addDigits(int num) {
        if(num <=9 ){
            return num;
        }
        while(true){
            int frist = num/10;
            int sec = num%10;
            if(frist+sec <=9){
                return frist+sec;
            }else{
                num = frist+sec;
            }
        }
        return 0;
    }
};