# ft_list_foreach

## Informations de rendu
- **Nom de l'exercice** : `ft_list_foreach`
- **Fichiers attendus** : `ft_list_foreach.c`, `ft_list.h`
- **Fonctions autorisées** : `-`

## Description
 - Écrivez une fonction qui prend une liste et un pointeur de fonction, et applique cette fonction à chaque élément de la liste.

La fonction doit être déclarée comme suit :
```c
void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
```
Le pointeur de fonction f sera utilisé de la manière suivante :
```c
(*f)(list_ptr->data);
```
Structure requise
Vous devez utiliser la structure suivante et la sauvegarder dans un fichier nommé ft_list.h :
```c
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
```