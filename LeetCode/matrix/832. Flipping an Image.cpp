class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        for(int row=0;row<n;row++){
            reverse(image[row].begin(),image[row].end());
            for(int i =0; i<n;i++){
                if(image[row][i]==0){
                    image[row][i]=1;
                }else{
                    image[row][i]=0;
                }
            }
        }
        return image;
    }
};