//#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int main (void)
{
	int a;
	int b;

	a = 10;
	b = 20;
	
	printf("valeur de a :%d, adresse de a : %p, valeur de b : %d, adresse de b : %p\n", a, &a, b, &b);
	ft_swap(&a, &b);
        printf("valeur de a :%d, adresse de a : %p, valeur de b : %d, adresse de b : %p\n", a, &a, b, &b);
}
/*
