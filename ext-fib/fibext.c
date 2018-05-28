#include <Python.h>

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

static PyObject* fibext(PyObject* self, PyObject* args)
{
    int n = -1;
    long long int native_result;

    if (!PyArg_ParseTuple(args, "i", &n)) {
        return NULL;
    }

    native_result = fib(n);

    return PyLong_FromLongLong(native_result);
}

static PyMethodDef FibextMethods[] =
{
    {"fibext", fibext, METH_VARARGS, "Docstring goes here"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef fibextmodule = {
    PyModuleDef_HEAD_INIT,
    "fibext",
    NULL,
    -1,
    FibextMethods
};

PyMODINIT_FUNC
PyInit_fibext(void)
{
    return PyModule_Create(&fibextmodule);
}
