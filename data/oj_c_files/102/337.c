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

int cmpf(void const *a,void const *b)
{
	double m;
	m=*(double *)b-*(double *)a;
	if (m>0) return 1;
	else return -1;
}
int cmpm(void const *a,void const *b)
{
	double m;
	m=*(double *)a-*(double *)b;
	if (m>0) return 1;
	else return -1;
}
int main()
{
	int n,i;
	double	f[40],m[40];
	int fp=0,mp=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		char s[7];
		scanf("%s",s);
		if (s[0]=='f')
			scanf("%lf",&f[fp++]);
		else
			scanf("%lf",&m[mp++]);
	}
	qsort(f,fp,sizeof(double),cmpf);
	qsort(m,mp,sizeof(double),cmpm);

	for (i=0;i<mp;i++)
		printf("%.2lf ",m[i]);
	
	for (i=0;i<fp;i++)
	{
		printf("%.2lf",f[i]);
		if (i!=fp-1)
            printf(" ");
	}
}
