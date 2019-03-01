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

char ch[1000];
char a , b ;
int len;
void pick( int m , int n )
{
     if( n - m == 1 )//???????????????? 
         cout << m << " " << n << endl;
     else
     {
		 int len1 = 0 , len2 = 0;
		 int i = 0;
		 int k;
		 for( i = m ; i <= n ; i ++ )
		 {
			  k = i;
			  if( ch[i] == a ) len1 ++;
			  else len2 ++;
			  if( len1 == len2 )
			  {
				  if( k < n )//??len1?len2???k < n??k???k?????? 
				  {
					  pick( m , m + 2 * len1 - 1);//?????????? 
					  pick( m + 2 * len1 , n );
				  }
				  else if( k = n )//??len1?len2???k = n???????????? 
				  {
					   pick( m + 1 , n - 1 );//?????????????????????? 
					   cout << m << " " << n << endl;
				  }
				  break;
			  }
		 }
     }
}
int main()
{
    cin >> ch;
    len = strlen(ch);
    a = ch[0] ;
    b = ch[len - 1];
    pick( 0 , len - 1 );
    return 0;
}
