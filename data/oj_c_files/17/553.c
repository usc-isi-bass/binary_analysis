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

int d[120]={0},l=0;
int search(int p)
{
	int i=p+1,j=0;
	while (1)
	{
		if (d[i]==-1)
		{
			j=search(i);//??
		    i=j+1;
		} else
		{
			if (d[i]==1) 
			{
				d[p]=0; d[i]=0;
				return i;
			}
			else i++;
		}
		if (i>=l) return i;
	}
}
int main()
{
	char ch;
	int i,j;
	while (cin.get(ch))
	{
	//	cout<<"-----"<<ch<<endl;
		if (ch=='\n')
		{   
			cout<<endl;
			i=0;
			while (i<l)
			{
				while ( i<l && d[i]>-1) {
					i++;
				}
				if( i >= l )
					break;
			   j=search(i);
			   i=j+1;
			}
			for (i=0;i<l;i++)
			{
				if (d[i]==-1) cout<<'$';//   ())
				else if (d[i]==1) cout<<'?';
				else cout<<' ';
			}
			cout<<endl;
			l=0;
			for (i=0;i<100;i++) d[i]=0;
		} else
		{
			cout<<ch;
			if (ch=='(') d[l]=-1;
			if (ch==')') d[l]=1;
			l++;
		}
		ch='\0';
	}
	return 0;
}
