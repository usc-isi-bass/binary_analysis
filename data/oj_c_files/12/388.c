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
	int n=100,nfa[n];
    int a[n][16];
	memset(a,-100,sizeof(a));
	memset(nfa,0,sizeof(nfa));
	for(int i=0;i<n;i++)
		for(int j=0;j<16;j++){
			cin>>a[i][j];
			if(a[i][0]==-1){n=i;
			break;}
			if(a[i][j]==0)break;
		}
	for(int i=0;i<n;i++)
		for(int k=0;k<16;k++)
			for(int j=0;j<16;j++)
			   if(a[i][j]==2*a[i][k])nfa[i]++;
    for(int i=0;i<n;i++)cout<<nfa[i]-1<<endl;
    return 0;
}