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

/*????2.cpp
  ???2012?12?25?
  ????? 1? 1200012895
  ???????
  */
int main()
{
	char a[260], b[260], c[260];                                    //a??????b????c?????
	char *p, *q, *k;  
	cin.getline(a, 260);
	cin.getline(b, 260);
	cin.getline(c, 260);
	int lena = strlen(a), lenb = strlen(b), flag = 0, t = 0, i;     //lena?a????lenb?b????flag??a????b?t??????
	p = a;
	q = a;
	k = b;
	while (*p != '\0')                                              //??p????'\0'??????
	{
		if (*q == *k)                                               //?????a?b?????
		{
			q++;                                                    //????????
			k++;
			if (*k == '\0')                                         //??b?????
			{
				flag = 1;                                           //?????????
				for (i = 0; i < t; i++)
					cout << a[i];
				cout << c;
				for (i = t + lenb; a[i] != '\0'; i++)
					cout << a[i];
				cout << endl;
				break;
			}
		}
		else                                                         //??p???????q??p????k????b
		{
			p++;
			q = p;
			k = b;
			t++;                                                     //??b????1
		}
	}
	if (flag == 0)                                                   //???????????????????
		cout << a << endl;
	return 0;
} 