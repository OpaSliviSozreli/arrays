#include <stdio.h>

void sum_matrix( int array1[][3], int array2[][3] );

int main()
{
    int array1[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    int array2[2][3] =
    {
        { 7,  8,  9},
        {10, 11, 12}
    };

    sum_matrix( array1, array2 );
}

void sum_matrix( int array1[][3], int array2[][3] )
{
    int sum[2][3] = {};

    for ( int i = 0; i < 2; i++)
    {
        for ( int j = 0; j < 3; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
            printf( "%d\n", sum[i][j] );
        }
    }
}
