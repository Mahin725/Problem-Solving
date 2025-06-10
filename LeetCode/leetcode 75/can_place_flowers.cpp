/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : can_place_flowers.cpp
 * platform: 
 * Date: 10 - 06 - 2025
 */
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sz = flowerbed.size();
        
        for (int i = 0; i < sz; i++) {
            if (flowerbed[i] == 0) {
                int prev = (i == 0) ? 0 : flowerbed[i - 1];
                int next = (i == sz - 1) ? 0 : flowerbed[i + 1];
                
                if (prev == 0 && next == 0) {
                    flowerbed[i] = 1;
                    n--;
                    if (n <= 0) return true;
                }
            }
        }
        
        return n <= 0;
    }
};
