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
	int n,m;
	char A[80];
	cin>>n;
	gets(A);
    for(int i=0;i<n;i++)
	{
		gets(A);
		m=strlen(A);
		int g=0;
		for(int j=0;j<m;j++)
		{
			if(!(A[j]>='a'&&A[j]<='z'||A[j]>='A'&&A[j]<='Z'||A[j]=='_'||A[j]>='0'&&A[j]<='9')||A[0]>='0'&&A[0]<='9')
				g=1;
		}
		if(g==1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
    }
	return 0;
}

