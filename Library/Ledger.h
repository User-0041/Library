#pragma once
#define ERROR_CANT_BRROW "Wait bro return the BOOKS \n"
#define ERROR_CANT_RETURN "is this is a joke you did not borrow that book \n"
#include"Books.h"
#include"Clients.h"
/*
Data-Oriented Design (DOD) is exemplified in this code, emphasizing efficient data organization and manipulation for optimal performance.
La Conception Orient�e Donn�es (COD) est illustr�e dans ce code, mettant l'accent sur une organisation et une manipulation efficaces des donn�es pour des performances optimales.
*/

// English Comment
// Represents a collection of borrowed items with dedicated vectors for client IDs and book IDs.
// French Comment
// Repr�sente une collection d'�l�ments emprunt�s avec des vecteurs d�di�s pour les identifiants de clients et les identifiants de livres.
struct Borrowed
{
	struct intVector clientsIds; // Vecteur pour les identifiants de clients
	struct intVector booksIds;   // Vecteur pour les identifiants de livres
};

// English Comment
// Creates a new collection of borrowed items.
// French Comment
// Cr�e une nouvelle collection d'�l�ments emprunt�s.
struct Borrowed NewBorrowed();

// English Comment
// Displays information about borrowed items.
// French Comment
// Affiche des informations sur les �l�ments emprunt�s.
void ShowBorrowed(struct  Borrowed* bb, struct   Books* bs, struct  Clients* ss);

// English Comment
// Borrows a book and updates the borrowed items collection.
// French Comment
// Emprunte un livre et met � jour la collection d'�l�ments emprunt�s.
void BorrowBook(struct Borrowed* bb, struct Books* bs, struct Clients* ss, int bookid, int userid);

// English Comment
// Returns a borrowed book and updates the borrowed items collection.
// French Comment
// Rend un livre emprunt� et met � jour la collection d'�l�ments emprunt�s.
void ReturnBook(struct Borrowed* bb, struct Books* bs, struct Clients* cc, int bookid, int userid);