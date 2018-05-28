long long int fib(int n) {
    long long int a = 0;
    long long int b = 1;
    long long int temp;

    if (n < 0 || n > 92) {
        return -1;
    }

    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }

    while (n > 1) {
        temp = b;
        b = a + b;
        a = temp;
        n--;
    }
    return b;
}
