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

//********************************
//*??????                  *
//*??????                  *
//*2012-10-19                    *
//********************************
int main()
{
	int z, q, s, l,m[4]={1,2,3,4};        //?????????????
	char n[5]="zqsl",r;                   //???????????
	int i=1,j=1,p;                        //???????
	for(z=1;z<=5;z++)                     //??????????????
	{
		for(q=1;q<=5;q++)
		{
			if(q==z) continue;           //?????
			for(s=1;s<=5;s++)
			{
				if(s==z||s==q) continue;
				for(l=1;l<=5;l++)
				{
					if(l==z||l==q||l==s) continue;
					if((z+q)==(s+l)&&(z+l)>(s+q)&&(z+s)<q)//???????????
					{
						m[0]=z,m[1]=q,m[2]=s,m[3]=l;      //???m????n???
						for(i=1;i<=3;i++)           //?????????3?
						{
							for(j=0;j<=3-i;j++)     //????????????
							{
								if(m[j]<m[j+1])     //???????
								{
									p=m[j],r=n[j];  //????????????????
									m[j]=m[j+1],n[j]=n[j+1];
									m[j+1]=p,n[j+1]=r;
								}
							}

						}
						for(i=0;i<=3;i++)           //????????
							cout << n[i] << " " << m[i]*10 <<endl;
					}
				}
			}
		}
	}
	return 0;
}