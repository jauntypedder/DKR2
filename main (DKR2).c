#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int temp;
    int a = 10 + rand() % 5 + 2;
    do
    {
        printf ( "Enter N\n" );
        scanf ( "%d", &N );
    }
    while ( N <= 1 );
    int A[N];
    for ( int i = 0; i < N; i++ )
    {
        A[i] = rand() % a;
    }
    printf ( "\n" );
    for ( int i = 0; i < N; i++ )
    {
        printf ( "%d ", A[i] );
    }
    printf ( "\n" );
    for ( int i = 0; i < N; i++ )
    {
        for ( int j = 1; j < N; j++)
        {
            if ( A[j] > A[j-1] )
            {
                temp = A[j-1];
                A[j-1] = A[j];
                A[j] = temp;
            }
        }
    }
    printf ( "\n" );
    for (int i = 0; i < N; i++ )
    {
        printf ( "%d ", A[i] );
    }
    printf ( "\n" );
    return 0;
}
