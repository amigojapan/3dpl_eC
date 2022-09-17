import "ecere"
#include <stddef.h>

long long int findSubString( const char original[], const char toFind[] )
{
    int i;
    size_t n = strlen( original );
    size_t m = strlen( toFind );

    long long int success = -1;

    if ( !( n < m ) )
    {
        n = n - m + 1;

        for ( i = 0; success == -1 && i < n; i++ )
        {
            size_t j = 0;
            while ( j < m && original[i+j] == toFind[j] ) j++;

            if ( j == m ) success = i;
        }
    }

    return success;
}
