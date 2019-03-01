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

int main ()
{
	int n,i,k=0,sum[2000]={0};
	char word[2000][45];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>word[i];
	for(i=0;i<n-1;i++)
	{ 
		sum[k]=sum[k]+strlen(word[i])+1;  //????????
		if(sum[k]-1<=80 && sum[k]+strlen(word[i+1])<=80)   //???????????????
		{
			if(i!=n-2)
				cout<<word[i]<<' ';
			else
				cout<<word[i]<<' '<<word[i+1];
		}		
		else if(sum[k]-1<=80 && sum[k]+strlen(word[i+1])>80)
		{
			cout<<word[i]<<endl;
			k++;
		}
	}
	return 0;
}