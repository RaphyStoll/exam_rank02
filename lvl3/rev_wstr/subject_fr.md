## rev_wstr
## Informations de rendu
- **Nom de l'exercice** : `rev_wstr`
- **Fichiers attendus** : `rev_wstr.c`
- **Fonctions autorisées** : `malloc` `write` `free`
## Description
 - Écrivez un programme qui prend une chaîne de caractères comme paramètre et affiche ses mots dans l'ordre inverse.
 - Un "mot" est une partie de la chaîne délimitée par des espaces et/ou des tabulations, ou par le début/fin de la chaîne.
 - Si le nombre de paramètres est différent de 1, le programme affichera un retour à la ligne (`\n`).
 - Dans les paramètres qui seront testés, il n'y aura pas d'espaces "supplémentaires" (ce qui signifie qu'il n'y aura pas d'espaces supplémentaires au début ou à la fin de la chaîne, et les mots seront toujours séparés par exactement un espace).
 ## Exemples
 ```bash
 $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$

$> ./rev_wstr "abcdefghijklm"
abcdefghijklm

$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$

$> ./rev_wstr | cat -e
$
 ```