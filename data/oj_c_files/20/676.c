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

int find(char *str,int n)
{
	int max=*str,i,sign;
	for(i=0;i<n;i++)
		if(*(str+i)>max)max=*(str+i),sign=i;
		return sign;
}
void insert(char *a,char *b,int k,int n)
{
	int i,j;
	for(i=n;i>k;i--)
		*(a+i+3)=*(a+i);
	for(j=0;j<3;j++)
		a[++k]=b[j];
}
void main()
{
      char str[100],substr[10];
	  int n,sign;
	  while(scanf("%s%s",str,substr)!=EOF)
	  {
		  n=strlen(str);
	  sign=find(str,n);
	  insert(str,substr,sign,n);
	  printf("%s\n",str);
	  }
}



