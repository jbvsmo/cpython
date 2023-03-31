#ifndef Py_INTERNAL_RANGEOBJECT_H
#define Py_INTERNAL_RANGEOBJECT_H
#ifdef __cplusplus
extern "C" {
#endif

#ifndef Py_BUILD_CORE
#  error "this header requires Py_BUILD_CORE define"
#endif


/* runtime lifecycle */

extern void _PyRange_Fini(PyInterpreterState *);

extern PyObject *
_PyBuildRange_ConsumeRefs(PyObject *start, PyObject *stop);

#ifdef __cplusplus
}
#endif
#endif /* !Py_INTERNAL_SLICEOBJECT_H */
