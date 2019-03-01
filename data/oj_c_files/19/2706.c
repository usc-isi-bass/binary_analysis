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


char buffer[1024];
char word[1024];
char replace[1024];
char current[1024];

int main() {
	gets(buffer);
	scanf("%s %s", word, replace);

	int buffer_len = strlen(buffer);
	char *buffer_ptr = buffer;
	char *buffer_end = buffer + buffer_len;

	char *current_ptr = current;
	while (buffer_ptr < buffer_end) {
		if (*buffer_ptr == ' ') {
			*current_ptr = '\0';
			if (strcmp(word, current) == 0)
				printf("%s ", replace);
			else
				printf("%s ", current);
			current_ptr = current;
		} else {
			*current_ptr = *buffer_ptr;
			++current_ptr;
		}
		++buffer_ptr;
	}
	*current_ptr = '\0';
	if (strcmp(word, current) == 0)
		printf("%s", replace);
	else
		printf("%s", current);

	return 0;
}