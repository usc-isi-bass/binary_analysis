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
	int a[2][5]={0};
	for (a[0][0]=1;a[0][0]<=5;a[0][0]++)
		for (a[0][1]=1;a[0][1]<=5;a[0][1]++)
			for (a[0][2]=1;a[0][2]<=5;a[0][2]++)
				for (a[0][3]=1;a[0][3]<=5;a[0][3]++)
					for (a[0][4]=1;a[0][4]<=5;a[0][4]++)
					{
						if ((a[0][4]==2)||(a[0][4]==3))
							continue ;
						if (a[0][0]*a[0][1]*a[0][2]*a[0][3]*a[0][4]!=120)
							continue;
						a[1][0]=(a[0][4]==1),a[1][1]=(a[0][1]==2);
	                    a[1][2]=(a[0][0]==5),a[1][3]=(a[0][2]!=1),a[1][4]=(a[0][3]==1);
						if (a[1][0]+a[1][1]+a[1][2]+a[1][3]+a[1][4]!=2)
							continue ;
						for (int i = 0 ; i < 4 ; i ++)
							for (int j = i+1 ; j <= 4 ; j ++)
							if ((((a[0][i]==1)&&(a[0][j]==2))||((a[0][i]==2)&&(a[0][j]==1)))&&(a[1][i]+a[1][j]==2))
							{
								cout << a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<" "<<a[0][3]<<" "<<a[0][4];
								break ;
							}
					}

		return 0 ;
}