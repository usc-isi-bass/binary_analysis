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
	char a[120][102],b[120][102];
	int n,i,j,k,r,d,l,cao;
	for(i=1;i<=200;i++)
	{
		gets(a[i]);
		if (strlen(a[i])==0)
			break;
	}
    for(j=1;j<=i-1;j++)
	{
		for(k=0;k<=strlen(a[j])-1;k++)
		{
		    
			if (a[j][k]==')')
			{
				if (k==0)
				{
					l=0;
				}
				for (r=0,cao=0;r<=k-1;r++)
				{
					if (a[j][r]=='(')
					{
						for(d=r+1,l=1;d<=k-1;d++)
						{
							if (a[j][d]==')')
								l--;
							else if (a[j][d]=='(')
								l++;
						}
						if (l>0)
                            cao++;
					}
                
				}
				if (cao>0)
					b[j][k]=' ';
				else
					b[j][k]='?';
			}
			else if (a[j][k]=='(')
			{
				if (k==strlen(a[j])-1)
				{
					l=0;
				}
				for (r=k+1,cao=0;r<=strlen(a[j])-1;r++)
				{
					if (a[j][r]==')')
					{
						for(d=r-1,l=1;d>=k+1;d--)
						{
							if (a[j][d]=='(')
								l--;
							else if (a[j][d]==')')
								l++;
						}
						if (l>0)
							cao++;
					}
				}
				if (cao>0)
					b[j][k]=' ';
				else
					b[j][k]='$';
			}
			else
				b[j][k]=' ';
		}
	}
	for(j=1;j<=i-1;j++)
	{
		printf("%s\n%s\n",a[j],b[j]);
	}
	return 0;
}