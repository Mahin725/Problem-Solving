class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue<int,vector<int>, greater<int>>pq; 

        for(int i=0;i<nums.size();i++)
        {
            int elemnt = nums[i]*nums[i];
            pq.push(elemnt);
        }
        vector<int>a;
        while(!pq.empty()){
            int elemnt = pq.top();
            a.push_back(elemnt);
            pq.pop();
        }
        return a;

    }
};