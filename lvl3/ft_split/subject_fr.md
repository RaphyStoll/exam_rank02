## ft_split
## Informations de rendu
- **Nom de l'exercice** : `ft_split`
- **Fichiers attendus** : `ft_split.c`
- **Fonctions autorisées** : `malloc`
## Description
Écrivez une fonction qui prend une chaîne de caractères, la découpe en mots et retourne un tableau de chaînes de caractères terminé par NULL.

Un "mot" est défini comme une partie d'une chaîne délimitée soit par :
 - des espaces
 - des tabulations
 - des retours à la ligne
 - le début ou la fin de la chaîne
 ## Prototype de la fonction
 ```c
 char    **ft_split(char *str);
 ```