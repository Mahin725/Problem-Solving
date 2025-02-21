// https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1
class Solution {
    public:
      vector<int> lcmAndGcd(int a, int b) {
        int gcd = __gcd(a, b); 
          int lcm = (a / gcd) * b; 
          return {lcm, gcd};
      }
  };