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

char a[250],b[250],sum[251];
main()
{
	int lena,lenb,i,l,f;//l???????? 
	scanf("%s %s",a,b);
	lena=strlen(a);//????a??? 
	lenb=strlen(b);//????b???
	if(lena>lenb) l=lena;
	else l=lenb;
	for(i=0;i<l;i++)
    	a[i]-='0',b[i]-='0';//?????ASCII?????,??????????? 
	if(lena>lenb)
    	{  
			for(i=lena-1;i>=lena-lenb;i--)//??i?lena-lenb???lena-1????? 
				b[i]=b[i-lena+lenb];
			for(i=0;i<lena-lenb;i++)
				b[i]=0;
		}
	else if(lena<lenb) 
    	{ 
			for(i=lenb-1;i>=lenb-lena;i--)
				a[i]=a[i-lenb+lena];
			for(i=0;i<lenb-lena;i++)
				a[i]=0;
		}//????????????????????? 
	f=l;
	for(i=0;i<l;i++)
		sum[i+1]=a[i]+b[i];//?????,????  i+1????????????????????? 
	for(i=l;i>=0;i--)
		if(sum[i]>9)
			sum[i]-=10,sum[i-1]++;//?? 
	for(i=l;i>=0;i--)
		if(sum[i]!=0) f=i;
	for(i=f;i<=l;i++)
		printf("%d",sum[i]);
}