#include "list.h"
#include <stdlib.h>
#include <stdio.h>
void print_char(void *data) {

	printf("%c ",*(char*)data);
}

int main (void){
	char a = 'a';
	char b = 'V';
	char c = 'c';

	t_list third = {NULL, &c};
	t_list second = {&third, &b};
	t_list first = {&second, &a};

	ft_list_foreach(&first, print_char);
	printf("\n");
	return  0;
}
