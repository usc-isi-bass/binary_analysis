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

int  main()
{
	char str1[201],str2[201];
	cin.getline(str1,201);cin.getline(str2,201);
	if (strcmp(str1,"0")==0&&strcmp(str2,"0")==0)
		cout<<0;
	else
	{

    	int a[200]={0},b[200]={0},len1,len2,i,j=0;
    	len1=strlen(str1);len2=strlen(str2);
		for(i=len1-1;i>=0;i--)
         a[j++]=str1[i]-'0';
		j=0;
		for(i=len2-1;i>=0;i--)
			b[j++]=str2[i]-'0';
		for(i=0;i<200;i++)
		{
			a[i]=a[i]+b[i];
			if(a[i]>=10)
			{
				a[i]=a[i]-10;
                 a[i+1]++;
			}
		}
		for(i=200-1;i>=0;i--)
			if(a[i]!=0)
				break;
            for(;i>=0;i--)
				cout<<a[i];
			cout<<endl;
			return 0;
	}
}