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
	int a[6], A[6] = {0}, count, i;
	for (a[1] = 1; a[1] <= 5; a[1]++)
	{
		for (a[2] = 1; a[2] <= 5; a[2]++)
		{
			if (a[2] != a[1])
			{
				for (a[3] = 1; a[3] <= 5; a[3]++)
				{
					if (a[3] != a[1] && a[3] != a[2])
					{
						for (a[4] = 1; a[4] <= 5; a[4]++)
						{
							if (a[4] != a[1] && a[4] != a[2] && a[4] != a[3])
							{
								for (a[5] = 1; a[5] <= 5; a[5]++)
								{
									if (a[5] != a[1] && a[5] != a[2] && a[5] != a[3] && a[5] != a[4] && a[5] != 2 && a[5] != 3)
									{
										count = 0;
										A[1] = (a[5] == 1);
										A[2] = (a[2] == 2);
										A[3] = (a[1] == 5);
										A[4] = (a[3] != 1);
										A[5] = (a[4] == 1);
										for (i = 1; i <= 5; i++)
										{
											if ((a[i] == 1 || a[i] == 2) && A[i] == 1)
											{
												count++;
											}
											else if ((a[i] != 1 && a[i] != 2) && A[i] == 0)
											{
												count++;
											}
										}
										if (count == 5)
										{
											cout << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << endl;
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