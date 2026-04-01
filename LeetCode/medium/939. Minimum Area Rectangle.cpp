class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        set<pair<int,int>> pointSet;
        for(auto&point:points){
            pointSet.insert({point[0],point[1]});
        }
        int minArea = INT_MAX;

        for(auto& point1:points){
            for(auto& point2:points){
                if(point1[0]<point2[0] 
                &&  point1[1]<point2[1]
                &&  pointSet.count({point1[0],point2[1]})
                && pointSet.count({point2[0],point1[1]})){
                    int currentArea = (point2[0]-point1[0]) *(point2[1]-point1[1]);
                    minArea =min(minArea,currentArea);
                }
            }
        }
        return (minArea == INT_MAX)? 0:minArea;
    }
};