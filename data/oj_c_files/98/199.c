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

/*?????????????
 *??????
 *???2011-4-10
 */
int main()
{
	char word[41];
	int counter, num, len;
	cin >> num;
	counter = 0;
	for (int i = 0; i < num; i++){
		cin >> word;
		len = strlen(word);
		counter += len;
		if (counter + 1 > 80){
			cout << endl;
			counter = len;
		}
		else if (counter != len){
			cout << ' ';
			counter++;
		}
		cout << word;
	}
	return 0;
}
