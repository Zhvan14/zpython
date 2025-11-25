/* Minimal main program -- everything is loaded from the library */

#include "Python.h"

#ifdef MS_WINDOWS
int
wmain(int argc, wchar_t **argv)
{
    return NULL;
}
#else
int
main(int argc, char **argv)
{
    return Py_BytesMain(argc, argv);
}
#endif
int main() {
    printf("Hi\n");
    return 0;
}
