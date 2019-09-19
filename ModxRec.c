void modulus();
void reciprocal();

void modulus()
{
	int a, b, d=0;
	printf("\nPlease enter first number : ");
	scanf("%d", &a);
	printf("\nPlease enter second number : ");
	scanf("%d", &b);
	d=a%b;
	printf("\nModulus of entered numbers = %d\n", d);
}

void reciprocal()
{
	float r=0, b=0;
	printf("Enter Number: ");
	scanf("%f", &b);
	r=(1/b);
	if(b==0)
	{
		printf("Reciprocal Undefined\n");
	}
	else
	{
		printf("The reciprocal of %f, 1/%f is %f\n",b,b,r);
	}
}
