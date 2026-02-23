// Problem Code: 766. Toeplitz Matrix
// Brute-Force Apporch time complexity = O(m*n)
// Bellow have optimal approch

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool flg = true;

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j] !=matrix[i-1][j-1]){
                    flg = false;
                    return false;
                }
            }
        }
        return true;
    }
};