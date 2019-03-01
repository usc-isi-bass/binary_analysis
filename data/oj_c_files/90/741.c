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

/*
?M????????N????????????????????????????????K???????5?1?1?1?5?1???????

????
???????????t?0<= t <= 20?,??t????????M?N???????1<= M, N<= 10

????
????????M?N?????????K*/


int divide (int ap,int disc)
{
	if(ap<0)                     //ap???????
		return 0;
	
	if(ap==0 || disc==1)               //?????????????????????????
		return 1;
	if(disc>=2)
		return (divide(ap-disc,disc)+divide(ap,disc-1)); //????  
}

int main ()
{
	int i,n;
	int ap[20],disc[20];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ap[i]>>disc[i];
		cout<<divide(ap[i],disc[i])<<endl;           
	}

	return 0;
}