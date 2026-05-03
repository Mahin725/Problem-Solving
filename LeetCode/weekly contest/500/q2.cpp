class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int sumOfPrimesInRange(int n) {
        int newn = n;
        int revNum = 0;

        while (n > 0) {
            revNum = revNum * 10 + n % 10;
            n = n / 10;
        }

        int start = min(newn, revNum);
        int end = max(newn, revNum);

        int sum = 0;

        for (int i = start; i <= end; i++) {
            if (isPrime(i)) {
                sum += i;
            }
        }

        return sum;
    }
};