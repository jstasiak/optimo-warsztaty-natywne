from cffi import FFI

ffibuilder = FFI()
ffibuilder.set_source("fib_api_mode", """
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
""")
ffibuilder.cdef("""
    long long int fib(int n);
""")

if __name__ == '__main__':
    ffibuilder.compile(verbose=True)
