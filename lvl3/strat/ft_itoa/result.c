#include <stdlib.h>
#include <limits.h>

char *ft_itoa(int nbr) {

	int nb = nbr;
	int len = 0;
	char *str;
	
	if (nbr == INT_MIN) {
		return "-2147483647";
	}
	while (nb != 0) {
		nb /= 10;
		len++;
	}
	if (nbr < 0) {
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	if (nbr < 0){
		nbr = -nbr;
		str[0] ='-';
	}
	if (nbr == 0) {
		str[0] = '0';
		return str;
	}
	while (nbr != 
	0) {
		str[--len] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return str;
}

/*
#include <stdio.h>

int main() {

	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(1000000000));
	printf("%s\n", ft_itoa(-1000000000));
	printf("%s\n", ft_itoa(1000000001));
	printf("%s\n", ft_itoa(-1000000001));
}
*/