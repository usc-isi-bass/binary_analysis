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
	int z,q,s,l;
	for (z=1;z<=3;z++)
	{
		for (int q=4;q<=5;q++)
		{
			for (s=1;s<=3;s++)
			{
				for (l=1;l<=5;l++)
				{
					if ((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
					{	
						if (l>q&&q>z&&z>s)  //???????l>q>s,???????
						{
							cout << "l " << l*10 << endl;
							cout << "q " << q*10 << endl;
							cout << "z " << z*10 << endl;
							cout << "s " << s*10 << endl;
							break;
						}
						if (z>l&&l>q&&q>s)
						{
							cout << "z " << z*10 << endl;
							cout << "l " << l*10 << endl;
							cout << "q " << q*10 << endl;
							cout << "s " << s*10 << endl;
							break;
						}
						if (l>z&&z>q&&q>s)
						{
							cout << "l " << l*10 << endl;
							cout << "z " << z*10 << endl;
							cout << "q " << q*10 << endl;
							cout << "s " << s*10 << endl;
							break;
						}
						if (l>q&&q>s&&s>z)
						{
							cout << "l " << l*10 << endl;
							cout << "q " << q*10 << endl;
							cout << "s " << s*10 << endl;
							cout << "z " << z*10 << endl;
							break;
						}
					}				
				}
			}
		}
	}
	return 0;
}

