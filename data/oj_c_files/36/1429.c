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
	char a[1100]={'\0'};
	char b[1100]={'\0'};
	cin>>a>>b;
	int la,lb,jieguo=0,jishu=0;
	la=strlen(a);
	lb=strlen(b);
	if(la!=lb)jieguo=0;
	else
	{
		int i,j;
		for(i=0;i<la;i++)
		{
			for(j=0;j<la;j++)
			{
				if(b[j]==a[i]){b[j]='\0';jishu++;break;}
			}
		}
		if(jishu==la)jieguo=1;
	}
	if(jieguo==1)cout<<"YES";
	else cout<<"NO";

		

	return 0;
}