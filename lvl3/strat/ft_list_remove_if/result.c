#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)()) {
	if (begin_list == NULL || *begin_list == NULL)
		return ;
	t_list *current = *begin_list;
	if (cmp(current->data, data_ref) == 0) {
		*begin_list = current->next;
		free(current);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else {
		current = *begin_list;
		ft_list_remove_if(&current->next, data_ref, cmp);
	}
}




#include "list.h"
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
