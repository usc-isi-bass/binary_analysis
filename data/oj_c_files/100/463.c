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
	char st[300];
	char num[]="abcdefghijklmnopqrstuvwxyz";
	int i,n,j;
	int sum[30]={0};
	int total1=0,total2=0;
	gets (st);
	n=strlen(st);
	for (i=0;i<n;i++)
	{
		for (j=0;j<26;j++){
			if (st[i]==num[j])
				sum[j]++;
			total1+=sum[j];
		}
		total2+=total1;
	}
	if (total2==0)
		printf ("No");
	else
		
	for (j=0;j<26;j++){
		if(sum[j]!=0){
	printf("%c",num[j]);
	printf ("=%d\n",sum[j]);
		}
		}
	return 0;	
}