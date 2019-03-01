#include <ctype.h>
#include <math.h>

/* atof: convert string s to double */
double atof(char s[])
{
    double val, power, exp;
    int i, sign, signexp;

    for (i = 0; isspace(s[i]); i++)     /* skip white spaces */
        ;
    sign = (s[i] = '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')     /* skip the signs */
        i++;

    for (val = 0; isdigit(s[i]); i++)   /* collect the integer part */
    {
        val = val * 10.0 + (s[i] - '0');
    }
    if (s[i] == '.')
    {
        i++;
    }
    for (power  = 1.0; isdigit(s[i]); i++) /* collect the fractional part */
    {
        val = val * 10.0 + (s[i] - '0');
        power *= 10;
    }


    if (s[i] == 'e' || s[i] == 'E')     /* collects the exponent part*/
        i++;
    signexp = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (exp = 0.0; isdigit(s[i]); i++)
        exp = exp * 10.0 + (s[i] - '0');
    exp *= signexp;


    return sign * val / power * pow(10.0, exp);
}