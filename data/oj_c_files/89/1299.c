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


int inDegree[10000];
int outDegree[10000];

int main()
{
	int N;
	cin>>N;
	memset(inDegree,0,sizeof(inDegree));
	memset(outDegree,0,sizeof(outDegree));
	int first,second;
	while(cin>>first>>second)
	{
		if(first==0&&second==0)
			break;
		outDegree[first]++;
		inDegree[second]++;
	}
	int i;
	for(i=0;i<N;i++)
	{
		if(outDegree[i]==0&&inDegree[i]==N-1)
			break;
	}
	if(i==N)
		cout<<"NOT FOUND\n";
	else
		cout<<i<<endl;
	return 0;
}
