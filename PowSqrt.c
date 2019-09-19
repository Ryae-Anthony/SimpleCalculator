void power();
void squareroot();

void power()
{
	double a, num, p;
	printf("\nEnter two numbers to find thr power \n");
	printf("Number : ");
	scanf("%lf, &a");
	printf("Power : ");
	scanf("%lf, &num");
	p=pow(a,num);
	printf("\n%lf to the power of %lf = %lf", a, num, p);
}

void squareroot()
{
	double n, s;
	printf("\nEnter a number to find the square root \n");
	printf("Number : ");
	scanf("%lf, &n");
	s = sqrt(n);
	printf("\nThe square root of %lf = %lf", n, s);
}

