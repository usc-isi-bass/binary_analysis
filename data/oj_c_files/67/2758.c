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

float ample[N][2], effect[N];
int main()
{
	int n;
	cin>>n;
	float ample0=0, ample1=0, effect0=0;
	cin>>ample0>>ample1;
	effect0=ample1/ample0;
	for(int i=0; i<n-1; i++)
	{
		cin>>ample[i][0]>>ample[i][1];
		effect[i]=ample[i][1]/ample[i][0];
		if(effect0-effect[i]>0.05) cout<<"worse"<<endl;
		else if(effect[i]-effect0>0.05) cout<<"better"<<endl;
		else cout<<"same"<<endl; 
	}
	return 0;
}