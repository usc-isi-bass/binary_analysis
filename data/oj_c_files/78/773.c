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

//???????
//??????
int main ()
{
	int z,q,s,l;                                          //???????a,q,s,l                                           
	for(z=10;z<=50;z=z+10)                                //????????
	{
		for(q=10;q<=50;q=q+10)
		{
			if(q==z) continue;
			for(s=10;s<=50;s=s+10)
			{
				if(s==z||s==q) continue;
				for(l=10;l<=50;l=l+10)
				{
					if(l==z||l==q||l==s) continue;
					if(z+q==s+l&&z+l>s+q&&z+s<q)         //???????????
					{
						cout<<"l"<<" "<<l<<endl;         //???????????????????????????????????
					    cout<<"q"<<" "<<q<<endl;
						cout<<"z"<<" "<<z<<endl;
						cout<<"s"<<" "<<s<<endl;
					}
				}
			}
		}
	}
return 0;
}