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
	int i,j,t,n1,n2;
	int k[100];
	char a[100][100],b[100];
	i=0;
	while(gets(a[i]))
	{
		k[i]=strlen(a[i]);//??????????
		if(k[i]==0)
			break;
		i++;
	}//????????????????
	t=i;
	for(i=0;i<t;i++)
	{
		n1=0;
		n2=0; 
		for(j=0;j<k[i];j++)
		{
			b[j]=' ';
		}//???b??????� �
		for(j=0;j<k[i];j++)//????
		{
			if(n1<0)
				n1=0;//?n1???0
			if(a[i][j]=='(')
			{
				n1++;
			}//???????n1?1
			if(a[i][j]==')')
			{
				if(n1==0)
				{
					b[j]='?';
				 }
				 n1--;
			}//???????n1?1????1?n1?0??b?j?=�?�
		}
		for(j=k[i]-1;j>=0;j--)//????
		{
			if(n2<0)
				n2=0;//?n2???0
			if(a[i][j]==')')
			{
				n2++;
			}//???????n2?1
			if(a[i][j]=='(')
			{
				if(n2==0)
				{
					b[j]='$';
				}
				n2--;
			}//???????n2?1????1?n2?0??b?j?=�$�
		}
		for(j=0;j<k[i];j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;//????????
		for(j=0;j<k[i];j++)
		{
			cout<<b[j];
		}
		cout<<endl;//????b???
	}
	return 0;
}
 
	

