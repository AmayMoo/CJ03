//#include <stdio.h>

char *ft_strrev(char *str)
{
	int count;
	int size;
	char c;

	count = 0;
	size = 0;
	while(str[size])
		size++;
	size -= 1;
	while(count < size)
	{
		//printf("valeur de size : %d, valeur de count : %d\n", size, count);

		c = str[count];
		str[count] = str[size];
		str[size] = c;
		count++;
		size--;
	}
	return(str);
}
/*
int main(void)
{
	char str[]= "abcdef";
	ft_strrev(str);
	printf("%s\n", str);
	return(0);
}
/*
