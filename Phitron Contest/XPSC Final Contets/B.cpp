#include <bits/stdc++.h>
using namespace std;

void decodedString(string &text)
{
    string decoded = "";
    for (int i = 0; i < text.size(); i += 2) {
        char ch = text[i];    
        int count = text[i+1] - '0';  
        decoded.append(count, ch);  
    }
    cout<<decoded<<endl;
}

int main()
{
    int tcase;
    cin>>tcase;
    while(tcase--){
        string text;
        cin>>text;
        decodedString(text);
    }
    return 0;
}