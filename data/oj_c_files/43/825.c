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

int jud(int k)
{
	int s=sqrt(k);
	for(int i=2;i<=s;i++)
		if(k%i==0)
			return 0;
	return 1;


}
int main()
{
    int m, t, s;
	cin>>m;
	for(t=3;t<=m/2;t++)
    {
		s=m-t;
		if(jud(s)+jud(t)==2)
			cout<<t<<' '<<s<<endl;
	
	}
	return 0;

}