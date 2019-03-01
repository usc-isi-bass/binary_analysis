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

char	chi[200];
char	boy, gir;
int	pep;

void	zhaoren(int);

int main()
{
	cin.getline(chi, 200);
	pep = strlen(chi);
	boy = chi[0];
	gir = chi[pep - 1];

	zhaoren(pep);

return 0;
}
void	zhaoren(int n)
{
	if(n == 0)
	{return ;}
	
	for (int i = 0; i < pep; i ++)
	{
		if(chi[i] == gir)
		{
			for (int j = i; j >= 0; j --)
			{
				if(chi[j] == boy)
				{
					cout << j << " " << i << endl;
					chi[j] = '#';
					chi[i] = '#';
					zhaoren(n - 2);
					return;
				}
			}

		}
	}
return;
}
