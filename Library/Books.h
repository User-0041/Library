#define _CRT_SECURE_NO_WARNINGS
#pragma once


#include "StringVector.h"
#include "VectorInt.h"

/*
Data-Oriented Design (DOD) is exemplified in this code, emphasizing efficient data organization and manipulation for optimal performance.
La Conception Orient�e Donn�es (COD) est illustr�e dans ce code, mettant l'accent sur une organisation et une manipulation efficaces des donn�es pour des performances optimales.
*/

// English Comment
// Represents a collection of books with dedicated vectors for ids, stocks, names, and availabilities.
// French Comment
// Repr�sente une collection de livres avec des vecteurs d�di�s pour les identifiants, les stocks, les noms et les disponibilit�s.
struct books
{
	struct intVector ids;           // Vecteur pour les identifiants de livres
	struct intVector stocks;        // Vecteur pour les stocks de livres
	struct stringVector names;      // Vecteur pour les noms de livres
	struct intVector availabilities;// Vecteur pour les disponibilit�s de livres
};

// English Comment
// Defines individual book entities with id, stock, name, and availability attributes.
// French Comment
// D�finit des entit�s de livre individuelles avec des attributs d'identifiant, de stock, de nom et de disponibilit�.
struct book
{
	int id;                         // Identifiant du livre
	int stock;                      // Stock du livre
	char name[40];                  // Nom du livre
	int availabilitie;                  // Disponibilit� du livre
};

// English Comment
// Reads a book entry from the user.
// French Comment
// Lit une entr�e de livre depuis l'utilisateur.
struct book readBookFromUser();

// English Comment
// Creates a new collection of books.
// French Comment
// Cr�e une nouvelle collection de livres.
struct books NewBooks();

// English Comment
// Retrieves the size of the books collection.
// French Comment
// R�cup�re la taille de la collection de livres.
int getSize(struct books* bs);

// English Comment
// Adds a book to the collection.
// French Comment
// Ajoute un livre � la collection.
void AppendBookToList(struct book* b, struct books* bs);

// English Comment
// Prints information about a specific book.
// French Comment
// Imprime des informations sur un livre sp�cifique.
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
   Aspects Orient�s Donn�es :
   - L'utilisation de types de donn�es structur�s (`struct books`, `struct book`) refl�te une approche centr�e sur les donn�es.
   - Les fonctions op�rent sur des structures de donn�es, mettant l'accent sur la manipulation efficace de collections.
   - Les vecteurs (`struct intVector` et `struct stringVector`) sugg�rent une attention � la m�moire contigu� et � l'alignement des donn�es.
   - La s�paration des attributs du livre en vecteurs distincts s'aligne avec le paradigme "struct of array", am�liorant l'utilisation du cache et le traitement parall�le.
*/


