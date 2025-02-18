## ft_list_remove_if
## Informations de rendu
- **Nom de l'exercice** : `ft_list_remove_if`
- **Fichiers attendus** : `ft_list_remove_if.c`
- **Fonctions autorisées** : `free`

## Description
 - Écrire une fonction nommée ft_list_remove_if qui supprime de la liste passée en paramètre tout élément dont la donnée est "égale" à la donnée de référence.

La fonction sera déclarée comme suit :
```c
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
```
La fonction `cmp` prend deux `void*` en paramètres et renvoie 0 lorsque les deux paramètres sont égaux.
## Structure à utiliser
Vous devez utiliser le fichier `ft_list.h` qui contiendra :
```c
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
```