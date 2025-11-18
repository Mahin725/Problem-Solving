/**
 * "In the remembrance of Allah do hearts find rest." - Quran 13:28
 *
 */
#include <bits/stdc++.h>
using namespace std;

// int buyBestProfit(vector<int> prices)
// {
//     int mxProfit = 0, chepest = 0, indexBestProfit = -1;
//     // 4,1,5,2,7
//     // 7,6,4,3,1]
//     for (int i = 0; i < prices.size(); i++)
//     {
//         int element = prices[i];
//         if (i > 0)
//         {

//             if (i > indexBestProfit)
//             {
//                 int profit = element - chepest;
//                 if (profit > mxProfit)
//                 {
//                     mxProfit = profit;
//                 }
//             }
//         }
//         if (chepest > element)
//         {
//             chepest = element;
//             indexBestProfit = i;
//         }
//     }
//     return mxProfit;
// }
int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++) {
        int current = prices[i];
        int profit = current - minPrice;
        maxProfit = max(maxProfit, profit);
        minPrice = min(minPrice, current);
    }

    return maxProfit;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> prices = {7, 6, 4, 3, 1};
    int bestProfit = maxProfit(prices);
    cout << bestProfit << endl;
    return 0;
}
