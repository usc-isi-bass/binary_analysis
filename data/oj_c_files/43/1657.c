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


int checkprime(int x)
{
	int j;
    int count=0;
    if (x==1) count=1;
    if (x==2||x==3) count=0;
   if (x>=4){
	for (j=2;j<=sqrt(x);j++)
	{
		if (x%j==0)
			count++;

	}}
	return count;

}
int main()
{
	int i;
	int n;
	cin>>n;
	for (i=1;i<=n/2;i++)
	{
		if (checkprime(i)==0&&checkprime(n-i)==0)
			cout<<i<<" "<<n-i<<endl;
	}
	return 0;
}
