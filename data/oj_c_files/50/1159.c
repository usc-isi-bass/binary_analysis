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
{   int w,k,p[13],i;
cin>>w;
    switch(w)
	{ case 1:k=5;break;
	case 2:k=4;break;
		case 3:k=3;break;
			case 4:k=2;break;
				case 5:k=1;break;
				case 6:k=7;break;
				case 7:k=6;break;}
	p[0]=0;
	p[1]=13;
	p[2]=13+31;
	p[3]=13+31+28;
	p[4]=13+31+28+31;
	p[5]=13+31+28+31+30;
	p[6]=13+31+28+31+30+31;
	p[7]=13+31+28+31+30+31+30;
	p[8]=13+31+28+31+30+31+30+31;
	p[9]=13+31+28+31+30+31+30+31+31;
	p[10]=13+31+28+31+30+31+30+31+31+30;
    p[11]=13+31+28+31+30+31+30+31+31+30+31;
	p[12]=13+31+28+31+30+31+30+31+31+30+31+30;
	for(i=1;i<=12;i++)
	{ if((p[i]-k)%7==0) cout<<i<<endl;}
	




	return 0;
}