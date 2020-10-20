#include "superfile.h"


int myMethodInAnotherFile(int arg1, double arg2) {
    int localVariable = 44;
    int result = 0;

    for (int i = 0; i < arg1; i++)
    {
        result += 5;
        if (result % 10 == 0) {
            localVariable = localVariable - 4;
        }
    }


    return result;
}