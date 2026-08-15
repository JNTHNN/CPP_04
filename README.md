# Module CPP 04

Ce module introduit le **polymorphisme**, les **classes abstraites** et l'importance d'une **copie profonde (deep copy)** en C++.

## 1. Polymorphisme et destructeurs virtuels (`ex00`)
Le polymorphisme est la capacité pour une classe dérivée (comme `Cat` ou `Dog`) d'être manipulée au travers d'un pointeur de sa classe de base (`Animal`). 
Pour que cela fonctionne correctement, il faut :
- Utiliser le mot-clé `virtual` sur les méthodes qui peuvent être redéfinies par les enfants (ex: `virtual void makeSound()`).
- **Toujours utiliser un destructeur virtuel** (`virtual ~Animal()`) dans une classe de base. Si on l'oublie, la destruction d'un pointeur `Animal` pointant vers un `Cat` appellera *seulement* le destructeur de `Animal`, causant des fuites de mémoire.

L'exercice introduit aussi la classe `WrongAnimal` sans méthodes virtuelles. Cela démontre ce problème exact : l'assignation dynamique ne fonctionne plus, la méthode de la classe mère est appelée à la place de celle de l'enfant, et le mauvais destructeur est invoqué !

## 2. Deep Copy vs Shallow Copy (`ex01`)
Dans ce module, les classes `Cat` et `Dog` allouent dynamiquement (avec `new`) un attribut de type `Brain`.
Quand une classe gère de la mémoire dynamique, il faut être très attentif à la Règle de 3 (Copie, Assignation, Destruction) :
- **Shallow Copy (Copie superficielle)** : C'est la copie par défaut (ou une simple assignation de pointeur). Les deux objets partageront le même pointeur `_brain`. Si on en modifie un, l'autre est modifié. Pire, si on les détruit, ils essaieront tous les deux de `delete` le même pointeur (*double free*).
- **Deep Copy (Copie profonde)** : On crée manuellement une **nouvelle allocation** (`new Brain`) pour le nouvel objet, en lui copiant le contenu. Ainsi, chaque `Dog` ou `Cat` a bien son propre cerveau indépendant. 

## 3. Classes Abstraites et Méthodes Virtuelles Pures (`ex02`)
En C++, on ne peut pas interdire directement l'instanciation d'une classe (comme `Animal`).
Cependant, on peut la rendre **abstraite** (comme `AAnimal`) en déclarant au moins l'une de ses méthodes comme *pure virtual* en ajoutant `= 0` à la fin :
```cpp
virtual void makeSound() const = 0;
```
Une fois cela fait, `AAnimal` ne peut plus être instanciée directement. Elle sert uniquement de "contrat" que les classes enfants devront impérativement remplir en implémentant `makeSound()`.