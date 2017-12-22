#include <stdio.h>
#include <stdlib.h>
int *alloc_1d(int cols)
{
	// !!! IMPLEMENT ME
	// (solution is about 2 lines of code)
    int *arr = (int *)malloc(cols* sizeof(int));
    return arr;
}
int main(void)
{
    int *arr;
    arr = alloc_1d(8);
    arr[5] = 2;
    printf("%d", arr[5]);
    return 0;
    
}