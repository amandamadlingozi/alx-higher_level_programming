#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes_info - Print information about PyBytesObject.
 * @bytes_obj: PyObject pointer for bytes object.
 */
void print_python_bytes_info(PyObject *bytes_obj) {
    Py_ssize_t size = 0, i = 0;
    char *data = NULL;

    printf("[.] bytes object info\n");

    if (!PyBytes_CheckExact(bytes_obj)) {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    if (PyBytes_AsStringAndSize(bytes_obj, &data, &size) != -1) {
        printf("  size: %zd\n", size);
        printf("  trying string: %s\n", data);
        printf("  first %zd bytes:", size < 10 ? size : 10);

        while (i < size && i < 10) {
            printf(" %02hhx", data[i]);
            i++;
        }

        printf("\n");
    }
}

/**
 * print_python_list_info - Print information about PyListObject.
 * @list_obj: PyObject pointer for list object.
 */
void print_python_list_info(PyObject *list_obj) {
    Py_ssize_t size = 0;
    PyObject *item;
    int index = 0;

    if (PyList_CheckExact(list_obj)) {
        size = PyList_Size(list_obj);

        printf("[*] Python list info\n");
        printf("[*] Size of the Python List = %zd\n", size);
        printf("[*] Allocated = %lu\n", ((PyListObject *)list_obj)->allocated);

        while (index < size) {
            item = PyList_GET_ITEM(list_obj, index);
            printf("Element %d: %s\n", index, item->ob_type->tp_name);
            
            if (PyBytes_Check(item)) {
                print_python_bytes_info(item);
            }

            index++;
        }
    }
}
