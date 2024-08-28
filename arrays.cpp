#include <stdio.h>
void print_footbal_scoreboard();

int const NUMBER_OF_ELEMENTS_IN_ARRAY = 36;
int main()
{
    print_footbal_scoreboard();
}

void print_footbal_scoreboard()
{
    int count_raw = 1;
    int number_of_elements_in_raw = 1;
    int array_for_triangle[NUMBER_OF_ELEMENTS_IN_ARRAY] = {};

    for ( int i = 0; i < NUMBER_OF_ELEMENTS_IN_ARRAY; number_of_elements_in_raw++, i++ )
    {
        printf("%3d", array_for_triangle[i] );

        if ( number_of_elements_in_raw == count_raw )
        {
            printf( "\n" );

            count_raw++;
            number_of_elements_in_raw = 0;
        }
    }
}
