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
	int i,j,k,n;//??????ij???k?????n
	char a[81];//????a
	cin>>n;
	cin.getline(a,81);
	for(i=1;i<=n;i++)
	{
		k=1;
		cin.getline(a,81);//??
		if((a[0]>47)&&(a[0]<58))
			k=0;
		for(j=0;j<strlen(a);j++)
		{
			if(((a[j]>64)&&(a[j]<91))||((a[j]>96)&&(a[j]<123))||a[j]=='_'||((a[j]>47)&&(a[j]<58)))
				continue;
			k=0;//???????????
		}
		cout<<k<<endl;//??
	}
	return 0;
}
