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
	int  m[6] = {0},a[6] = {0}, i, j;
    for (m[1] = 2; m[1] <= 5; m[1]++)
	{
		for (m[2] = 1; m[2] <= 5; m[2]++)
		{
			if(m[2] == m[1]) 
		       continue;
			for (m[3] = 1; m[3] <= 5; m[3]++)
			{
				if((m[3]==m[2])||(m[3] == m[1]))
			        continue;
				for (m[4] = 1; m[4] <= 5; m[4]++)
				{
					if((m[4]==m[3])||(m[4] == m[2])||(m[4]==m[1]))
			           continue;
			        m[5] = 15-m[4]-m[3]-m[2]-m[1];
					if((m[5]==m[1])||(m[5]==m[2])||(m[5]==m[3])||(m[5]==m[4]))
						continue;
					if ((m[5] == 2)||(m[5] == 3)||(m[5] ==1))
						continue;
					a[1]=(m[5]==1);
					a[2]=(m[2]==2);
					a[3]=(m[1]==5);
					a[4]=(m[3]!= 1);
					a[5]=(m[4]==1);
			        if((m[5]==1)+(m[2]==2)+(m[1]==5)+(m[3]!= 1)+(m[4]==1) ==2)
					{
						for(i =1;i <=5;i++)
						{
							if((m[i]==1)&&(a[i]==1))
								for(j = 1;j<=5;j++)
								{
									if((m[j]==2)&&(a[j]==1))
										cout << m[1] <<" "<< m[2] <<" "<< m[3] <<" " << m[4] <<" " << m[5];
								}
						}
					}
				}
			}
		}
	}
	return 0;
}
	



