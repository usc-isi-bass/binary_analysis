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


/*************************
 ***??:??? 1200012776
 ***????:????
 ***??:2012?12?7?
 *************************/
int main()
{
	char ch[2000] = {0}, *p = &ch[0], *q = NULL, *l = NULL, *k;
	int n, flag = 0;
	cin >> n;
	cin.get();
	cin.getline(ch, 2000);
	while (*p != 0)	//??
	{
		flag = 0;
		for (q = p; ;)	//??????????
		{
			for (l = q; *l != ' ' && *l != 0; l++);	//???????
			l--;
			if (l - p < 80)	//???????????80,????
			{
				if (flag == 1)	//?????????,????,?????
				{
					cout << " ";
				}
				for (k = q; k <= l; k++)
				{
					cout << *k;
					flag = 1;
				}
				q = l + 2;	//?q??l+2,???????
			}
			else
			{
					cout << endl;	//??????,??????
					break;
			};
			if (*(l + 1) == 0)
			{
				q = l + 2;
				break;
			}
		}
		p = q;
	}
	return 0;
}


