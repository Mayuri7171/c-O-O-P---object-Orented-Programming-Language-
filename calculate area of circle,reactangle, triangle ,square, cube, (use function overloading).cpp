// calculate area of circle,reactangle, triangle ,square, cube, (use function overloading)

void area(float r)

{
	
	float a=3.14*r*r;
	cout<<"\n Area of circle="<<a;
	
}

void area ( int l, int b)

{
	
	int a=l*b;
	cout<<"\n area of reactangle="<<a;
	
}

void area(float a, float b)

{
	float a=0.5*b*h;
	cout<<"\n Area of triangle="<<a;
	
}

void area(double s)

{
	
 double a=s*s;
 cout<<"\n Area of square="<<a;
 	
}

void area(int s)

{
	int a=s*s;
	coiut<<"\nArea of cube="<<a;
	
}

int main()

{
	area(3.9f);
	area(6,9);
	area(2.4f,6.3f);
	area(66,99);
	area(15);
}
