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
	int z=1,i;
	int q=1;
	int s=1;
	int l=1;
	int a[6]={0};
	char b[6];
	for (z=1;z<=5;z++)
	{
		for (q=1;q<=5;q++)
		{
			if (z==q) continue;
			for (s=1;s<=5;s++)
			{
				if(s==q||s==z)continue;
				for (l=1;l<=5;l++)
				{
					if(l!=s&&l!=q&&l!=z)
					{
						if ((z+q)==(s+l)&&(z+l)>(s+q)&&(z+s)<q)
						{
						    a[z]=z*10;a[q]=q*10;a[s]=s*10;a[l]=l*10;
                            b[z]='z';b[q]='q';b[s]='s';b[l]='l';
                            for(i=5;i>0;i--)
                            {
                                if(a[i]!=0)
                                {
                                    cout<<b[i]<<" "<<a[i]<<endl;
                                }
                            }
						    	break;
						}
					}
				}
			}
		}
	}
return 0;
}
