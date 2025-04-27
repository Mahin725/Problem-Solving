/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Question_Marks.cpp
 * platform: 
 * Date: 27 - 04 - 2025
 */


 #include <bits/stdc++.h>

 using namespace std;
 
 int main()
 {
 
     int cp;
     cin >> cp;
 
     while (cp--)
     {
         map<char, int> m;
         int n;
         cin >> n;
         string s;
         cin >> s;
         for (int i = 0; i < 4 * n; i++)
         {
             m[s[i]] += 1;
             m[s[i]] = min(n, m[s[i]]);
         }
         cout << m['A'] + m['B'] + m['C'] + m['D'] << "\n";
     }
 }