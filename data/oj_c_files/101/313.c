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

/*A??B??????C??????? 
B??A??????A??C??? 
C????B????B?A???? 
*/
int main()
{
	int a[3] = {1,2,3}, A, B, C, s1, s2, s3;//????????1? 2? 3?si?????????
	char b[3]; //???????A? B? C
	for(int i=0; i < 3;i++)
	{
		A = a[i];
		for(int j=0; j < 2;j++)
		{
			if(j == i)
			{
				continue;
			}
			else
			{
				B = a[j];
				for(int k=0; k < 3; k++)
				{
					if(k == i&&k == j)
					{
						continue;
					}
					else
					{
						C = a[k];
						s1=(B>A)+(A==C);
						s2=(A>B)+(A>C);
						s3=(C>B)+(B>A);
						b[s1] = 'A';         //???????????????????
						b[s2] = 'B';
						b[s3] = 'C';
						if(s1 != s2&&s1 !=s3&&s2 != s3) //???????
						{
							int f=0;
							for(int l=0;l < 3; l++)
							{
								cout<<b[l];
								f++;
								if(f == 3)
									return 0;
							}
						}
					}
				}
			}
		}
	}
}