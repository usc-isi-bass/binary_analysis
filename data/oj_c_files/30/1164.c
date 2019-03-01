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
	int i,s,m,x,k,n;
	float h;//h&Ecirc;&Ccedil;
	cin >>n;
	for(i=1,s=0;i<=n;i++)
	{
		for(m=i,x=0;m!=0;m=(m-k)/10)//x???n????????????7???
		{
			k=m%10;
			if(k==7){x++;break;}
		}
		if((i%7!=0)&&(x==0)) s+=i*i;
	}
	cout <<s <<endl;
	return 0;
}
