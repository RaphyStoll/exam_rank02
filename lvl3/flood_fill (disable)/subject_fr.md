# Flood Fill

## Informations du sujet
- **Nom du programme** : `flood_fill`
- **Fichiers attendus** : `*.c, *.h`
- **Fonctions autorisées** : `-`

## Description
Écrire une fonction qui prend en paramètres :
- Un `char **` comme tableau à deux dimensions de caractères
- Une `t_point` définissant les dimensions de ce tableau
- Une `t_point` comme point de départ

À partir du point de départ 'begin', cette fonction doit remplir une zone entière en remplaçant les caractères à l'intérieur par le caractère 'F'. Une zone est un groupe du même caractère délimité horizontalement et verticalement par d'autres caractères ou par les limites du tableau.

La fonction flood_fill ne remplit pas en diagonale.

### Prototype de la fonction
```c
void  flood_fill(char **tab, t_point size, t_point begin);
typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;
```

exemple:
```c
$> cat test.c
#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}


int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
```
```bash
$> gcc flood_fill.c test.c -o test; ./test
11111111
10001001
10010001
10110001
11100001

FFFFFFFF
F000F00F
F00F000F
F0FF000F
FFF0000F
$>
```