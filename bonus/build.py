import cffi
ffibuilder = cffi.FFI()

ffibuilder.set_source('bonusplugin', '')

ffibuilder.embedding_api('void say_hi();')

ffibuilder.embedding_init_code("""
    from bonusplugin import ffi, lib

    @ffi.def_extern()
    def say_hi():
        print('This is Python 3!')
""")

if __name__ == '__main__':
    ffibuilder.compile(target='bonusplugin.so', verbose=True)
