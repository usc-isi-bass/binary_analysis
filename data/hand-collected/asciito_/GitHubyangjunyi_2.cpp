#include <stdio.h>
#include <ctype.h>

#define MAXLINE 100

double atofs(char s[]);
double atofsx(char s[]);
int getline(char line[], int max);

double atofs(char s[])
{
    double val, power;
    int i, sign;
    val = 0.0;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val == 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 *  val + (s[i] - '0');
        power *= 10.0;
    }

    return sign * val / power;
}

double atofsx(char s[])
{
    double val, power;
    int i, exp, sign;
    val = 0.0;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val == 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 *  val + (s[i] - '0');
        power *= 10.0;
    }
    val= sign * val / power;

    if (s[i] == 'e' || s[i] == 'E')
    {
        sign = (s[++i] == '-') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-')
            i++;
        for (exp = 0; isdigit(s[i]); i++)
            exp = 10 * exp + (s[i] - '0');
        if (sign == 1)
            while (exp-- > 0 )
                val *= 10;
        else
            while (exp-- > 0)
                val /= 10;
    }

    return val;
}

int getline(char line[], int max)
{
    int c, i;
    i = 0;
    while (--max > 0 && (c = getchar()) != EOF && c != '\n')
        line[i++] = c;
    if (c == '\n')
        line[i++] = c;
    line[i] = '\0';
    return i;
}
