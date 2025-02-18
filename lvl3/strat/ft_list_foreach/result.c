#include "list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *)) {
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

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

