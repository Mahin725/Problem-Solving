class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise = nums[nums[0]];
        int hare = nums[nums[nums[0]]];
        // int tortoise = nums[0];
        // int hare = nums[0];

        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        }
        tortoise = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }
        return hare;
    }
};