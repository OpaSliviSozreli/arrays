#include <stdio.h>

void sum_matrix( int array1[][2], int array2[][2] );

int main()
{
    int array1[2][2] =
    {
        {1, 2},
        {3, 4}
    };

    int array2[2][2] =
    {
        {0, 0},
        {1, 1}
    };

    sum_matrix( array1, array2 );
}

void sum_matrix( int array1[][2], int array2[][2] )
{
    int sum[2][2] = {};

    for ( int i = 0; i < 2; i++)
    {
        for ( int j = 0; j < 2; j++)
        {
            sum[i][j] = array1[i][j] * array2[i][j] + array1[i][j+1] * array2[i+1][j];
            printf( "%d\n", sum[i][j] );
        }
    }
}
