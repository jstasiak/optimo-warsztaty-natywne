from distutils.core import setup, Extension

module1 = Extension('fibext', sources = ['fibext.c'])

setup(name = 'fibext', ext_modules = [module1])
