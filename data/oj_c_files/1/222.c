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


int m,n,num;

void dfs(int i,int j)
{
	int x;

	if (i==1)
	{
		num++;
		return;
	}
	for (x=j;x<=i;x++)
		if (i%x==0)
        dfs(i/x,x);
}

int main()
{
    cin>>m;
    while(m>0){
        num=0;
        cin>>n;
	dfs(n,2);
        cout<<num<<endl;
	m--;
     }
}