#define MAXLEN 100

/* Two implementations of simple int to char array conversion */

void reverse(char input[], int length);

void itoa_loop(int c, char o[], int n)
{
  int i = 0;
  while (c > 0 && i < n) {
    o[i] = (c % 10) + '0';
    c /= 10;
    i ++;
  }
  o[i] = '\0';
  reverse(o, i);
}

void reverse(char o[], int n)
{
  int i = 0;
  int j = n - 1;
  int t;
  while (i < j) {
    t = o[i];
    o[i] = o[j];
    o[j] = t;
    i++;
    j--;
  }
}