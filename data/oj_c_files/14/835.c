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
	int n,i;
	int fir=0,sec=0,thi=0;
	int fir_n=0,sec_n=0,thi_n=0;
	struct
	{
		int num;
		int ma;
		int cn;
		int score;
	}s;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&s.num,&s.ma,&s.cn);
		s.score=s.ma+s.cn;

		if(s.score>fir)
		{
			thi=sec;
			thi_n=sec_n;
			sec=fir;
			sec_n=fir_n;
			fir=s.score;
			fir_n=s.num;
		}

       else if(s.score>sec)
		{
			thi=sec;
			thi_n=sec_n;
			sec=s.score;
			sec_n=s.num;
		}
	   else if(s.score>thi)
		{
			thi=s.score;
			thi_n=s.num;
		}
	}

	printf("%d %d\n",fir_n,fir);
	printf("%d %d\n",sec_n,sec);
	printf("%d %d\n",thi_n,thi);


	return 0;
}
