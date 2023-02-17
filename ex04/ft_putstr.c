#include <unistd.h>

void ft_putstr(char *str)
{
	int count;

	count = 0;
	while(str[count])
	count++;
	write(1, str, count);
}
/*
int main(void)
{
	ft_putstr("j'ai reussi ?");
}
/*
