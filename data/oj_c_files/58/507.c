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

int main ()
{
	int n;
	cin>>n;						//????????n
	getchar ();					//???????
	for ( int i=0; i<n; i++ )
	{
		char a[81];				//????????
		cin.getline(a,81);
		int j;
		int l=strlen(a);
		if ( (a[0]>='a'&&a[0]<='z')//?????????????????
				||(a[0]>='A'&&a[0]<='Z')
				||a[0]=='_')
			{
				for ( j=1; j<l; j++ )//???????????????
				{
					if ((a[j]>='a'&&a[j]<='z')
							||(a[j]>='A'&&a[j]<='Z')
							||(a[j]>='0'&&a[j]<='9')||(a[j]=='_'))
						continue;
					else
						break;
				}
				if ( j==l )				//???????????????1
					cout<<"1"<<endl;
				else
					cout<<"0"<<endl;   //??????0
			}
		else
			cout<<"0"<<endl;      //??????????0
	}
return 0;         //???????????
}               //????