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

//* ????2??m???
   //* ????
//*****
int susucheck(int a)
{int j;int flag=1;int l;
for(j=2;;j++)
{if(j*j<=a){ l=a/j;if(l*j==a) flag=0; }
else break;}
return flag;
}
int main()
{int m;
cin>>m;
int k;int i;
for(k=2;k<=m/2;k++)
	{if(susucheck(k)&&susucheck(m-k))


	cout<<k<<' '<<m-k<<endl;}
return 0;

}