#define _CRT_SECURE_NO_WARNINGS
#pragma once


#include "StringVector.h"
#include "VectorInt.h"

/*
Data-Oriented Design (DOD) is exemplified in this code, emphasizing efficient data organization and manipulation for optimal performance.
La Conception Orientée Données (COD) est illustrée dans ce code, mettant l'accent sur une organisation et une manipulation efficaces des données pour des performances optimales.
*/

// English Comment
// Represents a collection of books with dedicated vectors for ids, stocks, names, and availabilities.
// French Comment
// Représente une collection de livres avec des vecteurs dédiés pour les identifiants, les stocks, les noms et les disponibilités.
struct books
{
	struct intVector ids;           // Vecteur pour les identifiants de livres
	struct intVector stocks;        // Vecteur pour les stocks de livres
	struct stringVector names;      // Vecteur pour les noms de livres
	struct intVector availabilities;// Vecteur pour les disponibilités de livres
};

// English Comment
// Defines individual book entities with id, stock, name, and availability attributes.
// French Comment
// Définit des entités de livre individuelles avec des attributs d'identifiant, de stock, de nom et de disponibilité.
struct book
{
	int id;                         // Identifiant du livre
	int stock;                      // Stock du livre
	char name[40];                  // Nom du livre
	int availabilitie;                  // Disponibilité du livre
};

// English Comment
// Reads a book entry from the user.
// French Comment
// Lit une entrée de livre depuis l'utilisateur.
struct book readBookFromUser();

// English Comment
// Creates a new collection of books.
// French Comment
// Crée une nouvelle collection de livres.
struct books NewBooks();

// English Comment
// Retrieves the size of the books collection.
// French Comment
// Récupère la taille de la collection de livres.
int getSize(struct books* bs);

// English Comment
// Adds a book to the collection.
// French Comment
// Ajoute un livre à la collection.
void AppendBookToList(struct book* b, struct books* bs);

// English Comment
// Prints information about a specific book.
// French Comment
// Imprime des informations sur un livre spécifique.
void PrintBookInfo(struct books* bs, int id);

// English Comment
// Displays available books.
// French Comment
// Affiche les livres disponibles.
void ShowAvailable(struct books* cs);

// English Comment
// Displays non-available books.
// French Comment
// Affiche les livres non disponibles.
void ShowNonAvailable(struct books* cs);

// English Comment
/*
   Data-Oriented Aspects:
   - The use of structured data types (`struct books`, `struct book`) reflects a data-centric approach.
   - Functions operate on data structures, focusing on manipulating collections efficiently.
   - Vectors (`struct intVector` and `struct stringVector`) suggest an emphasis on contiguous memory and data alignment.
   - The separation of book attributes into distinct vectors aligns with the "struct of array" paradigm, enhancing cache utilization and parallel processing.
*/
// French Comment
/*
   Aspects Orientés Données :
   - L'utilisation de types de données structurés (`struct books`, `struct book`) reflète une approche centrée sur les données.
   - Les fonctions opèrent sur des structures de données, mettant l'accent sur la manipulation efficace de collections.
   - Les vecteurs (`struct intVector` et `struct stringVector`) suggèrent une attention à la mémoire contiguë et à l'alignement des données.
   - La séparation des attributs du livre en vecteurs distincts s'aligne avec le paradigme "struct of array", améliorant l'utilisation du cache et le traitement parallèle.
*/


