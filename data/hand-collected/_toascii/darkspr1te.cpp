
#define PSH(X) (*(st++)=(X))

#define PLUS 1
#define SPACE 2

#define fabs(x) ((x)<0 ? (-x) : (x))

/* FIXME: This file contains roundoff error */

char * ftoa(char *st, float f, int flags)
{
  int i;
  int z;
  int exp = 0;

  if (f < 0) {
    PSH('-');
    f = -f;
  } else {
    if (flags & PLUS) PSH('+');
    if (flags & SPACE) PSH(' ');
  }

  if (f) {
    while (f < 1) {
      f *=10;
      exp--;
    }

    while (f >= 10) {
      f /=10;
      exp++;
    }
  }

  while ((exp > 0) && (exp < 7)) {
      PSH('0'+f);
      z = f;
      f -= z;
      f *= 10;
    exp--;
  }

  PSH('0'+f);
  z = f;
  f -= z;
  f *= 10;

  PSH('.');

  for (i=0;i<2;i++) {
    PSH('0'+f);
    z = f;
    f -= z;
    f *= 10;
  }
  
  if (exp != 0) {

      PSH('e');
      if (exp < 0) {
        PSH('-');
        exp = -exp;
      } else {
        PSH('+');
      }

      PSH('0'+exp/10);
      exp -= (exp/10) * 10;
      PSH('0'+exp);
  

 }

  PSH(0);


  return st;
}