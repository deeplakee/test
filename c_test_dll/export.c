#define EXPORT_DLL
#include "export.h"
#include <stdio.h>
#include <time.h>


//返回今天日期
void printDate()
{
    time_t t = time(NULL);
    struct tm *p = localtime(&t);
    printf("Today is %d-%d-%d\n", p->tm_year + 1900, p->tm_mon + 1, p->tm_mday);
}

//gcc -shared -o export.dll export.c