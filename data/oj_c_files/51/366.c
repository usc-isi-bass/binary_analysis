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


luru(int i,char s[],char temp[],int k)
{
	int j;
	for(j=0;j<k;j++)
		temp[j]=s[i+j];
	temp[k]=0;
}

main()
{
	char s[510]={0},temp[10]={0};
	char gram[510][10]={{0}};
	int b[510]={0};
	int n,max=1,t=0;
	int len;
	int i,j;

	scanf("%d\n",&n);
	gets(s);
	len=strlen(s);

	for(i=0;i<len+1-n;i++){
		luru(i,s,temp,n);
		for(j=0;j<t;j++)
			if(strcmp(temp,gram[j])==0)
				b[j]++;
		if(j==t)
		{strcpy(gram[t],temp);b[t]++;t++;}
	}

	for(i=0;i<t;i++)
		if(b[i]>max) max=b[i];

	if(max==1) printf("NO");
	else
	{
		printf("%d\n",max);
		for(i=0;i<t;i++)
			if(b[i]==max) printf("%s\n",gram[i]);
	}
}