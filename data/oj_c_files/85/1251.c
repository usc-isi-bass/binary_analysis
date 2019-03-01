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
	char zz[100];
	int n,l,i;
	cin>>n;
     getchar();
	while(n--)
	{
		gets(zz);
		l = strlen(zz);
		for ( i = 0 ; i < l ; i ++ )
		{
			if ( zz[i]>='a' && zz[i]<='z' || zz[i]>='0'&&zz[i]<='9' || zz[i]>='A'&&zz[i]<='Z' || zz[i]=='_');
			else
				break;
		}
		if ( zz[0] >= '0' && zz[0] <= '9' )
			cout<<"no"<<endl;
		else if ( i == l )
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}



