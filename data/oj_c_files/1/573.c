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

int f(int m,int n)//?????
{
	if(m<n||m/n==1)//?????????2?????0
		return 0;
	if((m%n==0)&&m/n>=n)//?m???n??m/n?????n
		return f(m/n,n)+f(m,n+1)+1;
	else//??????
		return f(m,n+1);

}
int main()
{
	int q,i;
	cin>>q;
	for(i=1;i<=q;i++)
	{
	int p;
	cin>>p;
	cout<<f(p,2)+1<<endl;//?1?????????????
	}
	return 0;//????
}
