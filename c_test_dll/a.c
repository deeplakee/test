#include<stdio.h>

int main(int argc, char const *argv[])
{
    int *a=(int *)malloc(sizeof(int));
    int b=6;
    *a=2;
    int c=b/(*a);
    printf("%d",c);
    return 0;
}

/*////**/