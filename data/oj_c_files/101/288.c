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
	int x[3],A,B,C,i;//???????????????
	for(A=1;A<=3;A++)//???????
    {for(B=1;B<=3;B++)
	{ for(C=1;C<=3;C++)
	{x[0]=(B>A)+(C==A);
	x[1]=(A>B)+(A>C);
	x[2]=(C>B)+(B>A);
    if ((x[0]>x[1])+(A>=B)==1&&(x[0]>x[2])+(A>=C)==1&&(x[1]>x[2])+(B>=C)==1)//?????????????????????????????????????????1
		for(i=1;i<=3;i++)//?????????
		{	if(A==i)  cout<<"A";
			if(B==i) cout<<"B";
			if(C==i) cout<<"C";}
	}
	}
	}
	return 0;
}   