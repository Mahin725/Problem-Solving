class KthLargest {
    private:
        priority_queue<int, vector<int>, greater<int>> minHeap;
        int kth;
public:
    KthLargest(int k, vector<int>& nums) {
        kth = k;
        for(auto num:nums){
            add(num);
        }
    }
    
    int add(int val) {
        minHeap.push(val);
        if(minHeap.size() > kth){
            minHeap.pop();
        }
        return minHeap.top();
    }
};

/**
    [4, 5, 8, 2] => [2,4,5,8] => k=3 => k-1
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */