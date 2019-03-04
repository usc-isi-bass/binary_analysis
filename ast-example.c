int main ()
{
	int x,y,z;
	x=10;
	y=x/2;
	while (y > 0);
	{
		z=x*4;
		if (z % 2 == 0)
			y--;
	}
	return y+z;
}
