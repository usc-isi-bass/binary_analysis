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
	int a,b,c;	//?????abc????????0?1?2
	int t,p;	//???????????t?p
	int i,j;	//??????i,j
	int m[4];	//????m??a,b,c??
	char n[4];	//????n??a?b,c,????
	for(a=0;a<=2;a++)
		for(b=0;b<=2;b++)
			for(c=0;c<=2;c++)
				{if((b>a)+(c==a)==(2-a)&&(a>b)+(a>c)==(2-b)&&(c>b)+(b>a)==(2-c))
				//?????????2-a???????????????�???�
			{m[1]=a;m[2]=b;m[3]=c;
	n[1]='A';n[2]='B';n[3]='C';
		for(j=1;j<=2;j++)
			for(i=1;i<=3-j;i++)
				if(m[i]>m[i+1])
				{t=m[i];m[i]=m[i+1];m[i+1]=t;
				 p=n[i];n[i]=n[i+1];n[i+1]=p;}		//?????????
	} }
		cout<<n[1]<<n[2]<<n[3]<<endl;
	return 0;
}