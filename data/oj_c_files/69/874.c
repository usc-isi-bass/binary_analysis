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
	int i,j,la,lb,l,a2[251],b2[251],result[251];
	char a[251],b[251];
	cin.getline(a,251);
	cin.getline(b,251);
	la=strlen(a);
	lb=strlen(b);
	if(la>lb) l=la;
	else l=lb;
	memset(result,0,sizeof(result));
	memset(a2,0,sizeof(a2));
	memset(b2,0,sizeof(b2));
	for(i=0;i<la;i++)
		a2[i]=a[la-i-1]-48;
	for(i=0;i<lb;i++)
		b2[i]=b[lb-i-1]-48;
	for(i=0;i<l;i++)
	{
		result[i]=result[i]+a2[i]+b2[i];
		if(result[i]>=10)
		{
			result[i]=result[i]-10;
			result[i+1]++;
		}
	}
	if((a2[0]==0)&&(b2[0]==0)) cout<<'0';
	else 
	{
		for(i=250;i>0;i--)
		{
			if(result[i]!=0) break;
		}
		for(j=i;j>=0;j--)
			cout<<result[j];
	}

	return 0;
}

		





	