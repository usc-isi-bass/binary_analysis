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
	int a[2][5],b,g;
	for(int i =1;i <=5;i++)
		for(int j =1;j <=5;j++)
			for(int k =1;k <=5;k++)
				for(int q =1;q <=5;q++)
					for(int w =1;w <=5;w++)
					{
						b=0;
						g=0;
						a[0][0]=i;
						a[0][1]=j;
						a[0][2]=k;
						a[0][3]=q;
						a[0][4]=w;
						a[1][0]=(a[0][4]==1);
						a[1][1]=(a[0][1]==2);
						a[1][2]=(a[0][0]==5);
						a[1][3]=(a[0][2]!=1);
						a[1][4]=(a[0][3]==1);
						b=a[1][0]+a[1][1]+a[1][2]+a[1][3]+a[1][4];
						if(b==2)
						{
							g=0;
							for(int e = 0; e<=4;e++)
							{
								if(a[1][e]==1)
									if(a[0][e]<3)
										g++;
							}
							if(g==2)
								if(a[0][0]*a[0][0]+a[0][1]*a[0][1]+a[0][2]*a[0][2]+a[0][3]*a[0][3]+a[0][4]*a[0][4]==55&&a[0][4]!=2&&a[0][4]!=3)
								{
									cout<<a[0][0];
								    for(int r=1;r<=4;r++)
									{
									    cout<<" "<<a[0][r] ;
									}
								    break;
								}
						}
					}
	return 0;
}
						
						
