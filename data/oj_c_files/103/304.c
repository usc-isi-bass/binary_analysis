#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
 char a[1001];
cin.getline( a, 1001 );
for( int i = 0; i < strlen( a ); i++ )
{
if( a[i] >= 97 )
	a[i] -= 32;
}
int i = 0 ;
while( i < strlen( a ) )
{
	int count = 1;
while( a[i] == a[ i + 1 ] )
{ i++;count++;}
cout << "(" << a[i] << "," << count << ")";
i++;
}
return 0;


}