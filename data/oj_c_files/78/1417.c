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
	int q,z,s,l,s1,s2,s3;
	char weight[6];
	memset(weight,0,sizeof(weight));
	for(q=1;q<6;q++)
		for(z=1;z<6;z++)
		{
			if(z==q)continue;
			for(s=1;s<6;s++)
			{
				if(s==z||s==q)continue;
				for(l=1;l<6;l++)
				{
					if(l==s||l==z||l==q)continue;
					s1=(z+q)==(s+l);
					s2=(z+l)>(s+q);
					s3=(z+s)<q;
					if(s1+s2+s3==3)
					{
						weight[q]='q';
						weight[z]='z';
						weight[s]='s';
						weight[l]='l';
						for(int i=5;i>0;i--)
							if(weight[i]!='\0')
								cout<<weight[i]<<' '<<i*10<<endl;
					}
				}
			}
		}
	return 0;
}