#include <Python.h>

static PyObject* helloext(PyObject* self, PyObject* args)
{
    Py_RETURN_NONE;
}

static PyMethodDef HelloextMethods[] =
{
    {"helloext", helloext, METH_VARARGS, "Docstring goes here"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef helloextmodule = {
    PyModuleDef_HEAD_INIT,
    "helloext",
    NULL,
    -1,
    HelloextMethods
};

PyMODINIT_FUNC
PyInit_helloext(void)
{
    return PyModule_Create(&helloextmodule);
}
