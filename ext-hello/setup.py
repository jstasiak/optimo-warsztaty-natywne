from distutils.core import setup, Extension

module1 = Extension('helloext', sources=['helloext.c'])

setup(name='helloext', ext_modules=[module1])
