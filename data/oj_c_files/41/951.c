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
	int a[6], b[6], k;
	for (a[5] = 1; a[5] <= 5; a[5]++)
	{
		if (a[5] != 2 && a[5] != 3)
		{
			for (a[1] = 1; a[1] <= 5;a[1]++)
			{
				if (a[1] != a[5])
				{
					for (a[2] = 1; a[2] <= 5; a[2]++)
					{
						if (a[2] !=a[1] && a[2] != a[5])
						{
							for (a[3] = 1; a[3] <= 5; a[3]++)
							{
								if (a[3] != a[1] && a[3] != a[2] && a[3] != a[5])
								{
									k = 0;
									a[4] = 15 - a[1] - a[2] - a[3] - a[5];
									b[1] = (a[5] == 1);
									b[2] = (a[2] == 2);
									b[3] = (a[1] == 5);
									b[4] = (a[3] != 1);
									b[5] = (a[4] == 1);
									if (b[1] + b[2] + b[3] + b[4] + b[5] == 2)
									{
										for (int j = 1; j <= 5; j++)
										{
											if (((a[j]==1) + (a[j] == 2) == 0) && (b[j] == 1))
												break;
											else
											{
												if (((a[j]==1) + (a[j] == 2) == 1) && (b[j] == 1))
													k++;
											}
										}
										if (k == 2)
										{
											for (int j = 1; j <= 4; j++)
											{
												cout << a[j] << " ";
											}
											cout << a[5];
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}


	return 0;
}
