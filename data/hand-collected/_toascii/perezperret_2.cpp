int itoa_recursive(int c, char o[], int n)
{
  int p = 0;

  if (c / 10) {
    p = itoa_recursive(c / 10, o, n);
  }

  o[p] = (c % 10) + '0';
  return p + 1;
}
