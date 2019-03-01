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
	int n; 
	cin >> n; 

	char vocab[36] = {0};
	char suffix[3][6] = {"re", "yl" , "gni"};
	
	for (int i = 0; i < n; i++)
	{
		memset(vocab,0,36);
		cin >> vocab;

		int k = strlen(vocab) - 1;
		char c[10] = {0};
		int p = 0;

		if (k > 3)
		{
			for (int j = k; j > k - 3; j--)
			{
				c[p] = vocab[j];
				p++;
			}
		
			if ((strcmp(suffix[2], c) == 0))
			{
				for (int y = k; y > k - 3; y--)
				{
					vocab[y] = '\0';
				}
				cout << vocab << endl;
				continue;
			}

			memset(c,0,3);
			p = 0;

			for (int j = k; j > k - 2; j--)
			{
				c[p] = vocab[j];
				p++;
			}

			if ((strcmp(c,suffix[0]) == 0) || strcmp(c,suffix[1]) == 0)
			{
				for (int y = k; y > k - 2; y--)
				{
					vocab[y] = '\0';
				}
				cout << vocab << endl;
			}

			
		}
	}


	
	return 0;
}



