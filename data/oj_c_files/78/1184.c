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

//****************************************
//***??????**
//***??????**
//***???2012.10.9**
//****************************************
int main()
{
	int z,q,s,l,i,j,w[4];              //??z,q,s,l?????????i,j?????w????
	char n[4] = {'z','q','s','l'};     //???n[]????????????
	for(z = 1;z <= 5;z ++)
	{for (q = 1; q <= 5;q ++)
		{for (s = 1; s <= 5;s ++)
			{
				for (l = 1; l <= 5;l ++)
				{
					if (z != q && z != s && z != l && q != s && q != l && s != l)
					{
						if ((z + q) == (s + l) && (z + l) > (s + q) && (z + s) < q)
							w[0] = z,w[1] = q,w[2] = s,w[3] = l;
					}}}}}
	//??????????????????
	for (i = 5;i >= 1; i --)                  //???????50,40,30,20,10,??????
	{
		for(j = 0;j < 4;j ++)
		{
			if (w[j] == i)                    //??j?????????????
				cout << n[j] << " " << 10 * w[j] << endl;
		}
	}
	return 0;
}