from cffi import FFI
ffi = FFI()
ffi.cdef("""
    long long int fib(int n);
""")
fib_lib = ffi.dlopen('fib.so')
fib = fib_lib.fib
