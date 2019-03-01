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


char* strrpl( char* src, char* sub, char* rpl )
{
char* p = strstr( src, sub );
int a, b;
if ( p == NULL )
return src;
a = strlen( sub );
b = strlen( rpl );
memmove( p + b, p + a, strlen( p + a ) + 1 );
memcpy( p, rpl, b );
return src;
}
int main()
{
char str[256],sub[256],rpl[256];
gets( str );
gets( sub );
gets( rpl );
puts( strrpl( str, sub, rpl ) );
} 