// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n-1;
        int Version =n;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(isBadVersion(mid)){
                r = mid-1;
                Version = mid;
            }else{
                l = mid+1;
            }
        }
        return Version;

        // Naive Approch
        // for(int i=1;i<=n;i++){
        //     if(isBadVersion(i)){
        //         return i;
        //     }
        // }
       
    }
};