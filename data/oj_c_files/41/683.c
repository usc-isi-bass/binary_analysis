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
	int a,b,c,d,e;
	int num[6];
	for( a=1 ; a<6 ; a++ )
	{
		for( b=1 ; b<6 ; b++ )
		{
			if( a==b )
			{
				continue;
			}
			for( c=1 ; c<6 ; c++ )
			{
				if( a==c || b==c )
				{
					continue;
				}
				for( d=1 ; d<6 ; d++ )
				{
					if( a==d || b==d || c==d )
					{
						continue;
					}
					for( e=1 ; e<6 ; e++ )
					{
						if( a==e || b==e || c==e || d==e )
						{
							continue;
						}
						num[0]=( e!=2 && e!=3 );
						num[a]=( e==1 );
						num[b]=( b==2 );
						num[c]=( a==5 );
						num[d]=( c!=1 );
						num[e]=( d==1 );
						if( num[0]==1 && num[1]==1 && num[2]==1 && num[3]==0 && num[4]==0 && num[5]==0 )
						{
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
						}
					}
				}
			}
		}
	}


}