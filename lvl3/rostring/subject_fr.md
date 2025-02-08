## rev_wstr
## Informations de rendu
- **Nom de l'exercice** : `rostring`
- **Fichiers attendus** : `rostring.c`
- **Fonctions autorisées** : `write` `malloc` `free`
## Description
 - Écrivez un programme qui prend une chaîne de caractères et l'affiche après avoir fait tourner les mots d'un cran vers la gauche.
 - Ainsi, le premier mot devient le dernier, et les autres restent dans le même ordre.
 - Un "mot" est défini comme une partie d'une chaîne délimitée soit par des espaces/tabulations, soit par le début/fin de la chaîne.
 - Les mots seront séparés par un seul espace dans la sortie.
Si le programme reçoit moins d'un argument, il affiche `\n`.
## Exemples
```bash
$>./rostring "abc   " | cat -e
abc$

$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que

$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ

$>./rostring "first" "2" "11000000"
first

$>./rostring | cat -e
$
```