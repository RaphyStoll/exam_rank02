## rev_wstr
## Informations de rendu
- **Nom de l'exercice** : `sort_list`
- **Fichiers attendus** : `sort_list.c`
- **Fonctions autorisées** : `-`
## Description
Écrivez la fonction suivante :
```c
t_list *sort_list(t_list* lst, int (*cmp)(int, int));
```
Cette fonction doit :
 - Trier la liste donnée en paramètre
 - Utiliser le pointeur sur fonction `cmp` pour déterminer l'ordre à appliquer
 - Retourner un pointeur vers le premier élément de la liste triée
 ### Notes importantes
 -Les doublons doivent être conservés
 - Les entrées seront toujours cohérentes
 - Vous devez utiliser le type t_list décrit dans le fichier list.h qui vous est fourni
 - Vous devez inclure ce fichier (#include "list.h"), mais vous ne devez pas le rendre
 - Nous utiliserons notre propre fichier pour compiler votre exercice
 ### Fonctionnement de cmp
 Les fonctions passées comme `cmp` retourneront toujours :

 - Une valeur différente de 0 si a et b sont dans le bon ordre
 - 0 dans le cas contraire
 ### Exemple
 La fonction suivante utilisée comme `cmp` triera la liste par ordre croissant :
```c
int ascending(int a, int b)
{
    return (a <= b);
}
```