bool isHappy(int n) {
    bool check[1000] = { false };
    int num = n;
    while (1) {
        int temp = num;
        if (num == 1 || num == 10 || num == 100) {
            return true;
        }
        num = 0;
        while (temp > 9) {
            int t = temp % 10;
            num += t * t;
            temp /= 10;
        }
        num += temp * temp;
        if (check[num]) break;
        else check[num] = true;
    }
    return false;
}