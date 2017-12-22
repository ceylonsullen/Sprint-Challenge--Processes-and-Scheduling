#include <stdio.h>
#include <stdlib.h>

int **alloc_2d(int row, int cols)
{
	// !!! IMPLEMENT ME
	// (solution is about 2 lines of code)
    int **arr = (int **)malloc(cols * sizeof(int *));
    for (int i = 0; i < cols; i++) 
    {
        arr[i] = (int *)malloc(row * sizeof(int));
    }
         
    return arr;
}
int main(void)
{
    int **arr;
    arr = alloc_2d(8, 8);
    arr[5][5] = 200000;
    printf("%d", arr[5][5]);
    return 0;
    
}