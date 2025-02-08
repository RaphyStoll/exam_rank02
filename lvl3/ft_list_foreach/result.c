#include "list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *)) {
	 
}

#include <stdlib.h>
#include <stdio.h>
void print_char(void *data) {

	printf("%c ",(char)data);
}

int main (void){
	char a = 'a';
	char b = 'b';
	char c = 'c';

	t_list third = {NULL, &c};
	t_list second = {&third, &b};
	t_list first = {&second, &a};

	ft_list_foreach(&first, print_char);
	printf("\n");
	return  0;
}