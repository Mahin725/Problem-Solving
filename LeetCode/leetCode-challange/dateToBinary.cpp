#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));

        string binaryYear = toBinary(year);
        string binaryMonth = toBinary(month);
        string binaryDay = toBinary(day);
        return binaryYear+"-"+ binaryMonth+"-"+binaryDay;
    }
    private:
    string toBinary(int num) {
        string binary = "";
        while (num > 0) {
            binary = char('0' + (num % 2)) + binary;
            num /= 2;
        }
        return binary.empty() ? "0" : binary;
    }
};
int main()
{
    string date = "2080-02-01";

    return 0;
}