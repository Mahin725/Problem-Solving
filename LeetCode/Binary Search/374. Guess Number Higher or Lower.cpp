/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    
    int guessNumber(int n) {
        // int l=1;
        // int r = n;
        // int mid = l+(r-l)/2;
        // int guesss =guess(mid);

        // while(l <= r){
        //     if(guesss==0){
        //         return mid;
        //     }
        //     if(guesss== -1){
        //         r = mid-1;
        //     }
        //     if(guesss== 1){
        //         l = mid + 1;
        //     }
        // }
        // return mid+1;

        // naive apporch
        
        // for(int i=1;i<=n;i++){
        //     int val = guess(i);
        //     if(val==0){
        //         return i;
        //     }
        // }
        int l = 1;
        int r =n-1;
        
        while(l <= r){
           int mid = l+(r-l)/2;
           int guesss = guess(mid);
            if(guesss == 0) return mid;
            if(guesss== -1) r = mid-1;
            if(guesss == 1) l = mid+1;
        }
        return n;
    }
};