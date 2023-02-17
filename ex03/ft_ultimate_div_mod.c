//#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;
	
	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}
/*
int main(void)
{
	int a, b;

	a = 100;
	b = 20;

	printf("valeur de a : %d, adresse de a : %p, valeur de b : %d, adresse de b : %p\n", a, &a, b, &b);
	ft_ultimate_div_mod(&a, &b);
        printf("valeur de a : %d, adresse de a : %p, valeur de b : %d, adresse de b : %p\n", a, &a, b, &b);

}
/*
