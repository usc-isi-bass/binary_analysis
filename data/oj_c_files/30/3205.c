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

//********************************************************
//*    ??   1100012931                                 *
//*    ??   ???????????                     *
//*    ???  2011.10.16                                *
//********************************************************
int main()
{
	int n,m,t,d,k,all=0;
	cin>>n;
	for(m=1;m<=n;m++)
	{
		if(m%7==0)  continue;//*??????
		t=0;d=m;  //*????t?d????????????
		do
		{
			k=d%10;
			if(k==7)
			{t++;break;}//*break?????????
			d=d/10;
		}while(d>1);
		if(t==0) all+=m*m;  
	}cout<<all<<endl;
	return 0;
}