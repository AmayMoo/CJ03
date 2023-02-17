//#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	//printf("----------debut div_mod-------------\n");
	//printf("adresse de a : %p, adresse de b : %p, adresse de div : %p, adresse de mod : %p\n", &a, &b, &div, &mod);
	*div = a / b;
	*mod = a % b;
	//printf("adresse de a : %p, adresse de b : %p, adresse de div : %p, adresse de mod : %p\n", &a, &b, &div, &mod);
	//printf("**********fin div_mod**************\n");
}
/*
int main(void)
{
	int a, b, div, mod;

	a = 100;
	b = 20;

	printf("valeur de a : %d, adresse de a : %p, valeur de b : %d, adresse de b : %p, adresse de div : %p, adresse de mod : %p\n", a, &a, b, &b, &div, &mod);
	ft_div_mod(a, b, &div, &mod);
	printf("valeur de a : %d, adresse de a : %p, valeur de b : %d, adresse de b : %p, valeur de div : %d, adresse de div : %p, valeur de mod : %d, adresse de mod : %p\n", a, &a, b, &b, div, &div, mod, &mod);
}
/*
