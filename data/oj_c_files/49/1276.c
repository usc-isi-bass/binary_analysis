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

int t,i;
char a[100];
char b[10000][100];
void f(int x)
{int u=1;
	int tt=strlen(b[x]);
	for(int q=0;q<tt;q++)
	{if(b[x][q]!=b[x][tt-q-1])
		{u=0;break;}
	}if(u==1)cout<<b[x]<<endl;
	return;
}
int main()
{int num=0;
    cin>>a;
    t=strlen(a);
    for(int j=2;j<=t;j++)
    {for(i=0;i<t-j+1;i++)
    {num++;
    	for(int k=0;k<j;k++)
    	{
    		b[num][k]=a[i+k];
    	}f(num);
    }
    }
    return 0;
}
