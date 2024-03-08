#include <stdio.h>

#include "export.h"

int main() {
    // 调用导入的函数
    printDate();
    return 0;
}
//gcc -o test.exe test.c -L./ -lexport