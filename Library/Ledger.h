#pragma once
#define ERROR_CANT_BRROW "Wait bro return the BOOKS \n"
#define ERROR_CANT_RETURN "is this is a joke you did not borrow that book \n"
#include"Books.h"
#include"Clients.h"
/*
Data-Oriented Design (DOD) is exemplified in this code, emphasizing efficient data organization and manipulation for optimal performance.
La Conception Orientée Données (COD) est illustrée dans ce code, mettant l'accent sur une organisation et une manipulation efficaces des données pour des performances optimales.
*/

// English Comment
// Represents a collection of borrowed items with dedicated vectors for client IDs and book IDs.
// French Comment
// Représente une collection d'éléments empruntés avec des vecteurs dédiés pour les identifiants de clients et les identifiants de livres.
struct Borrowed
{
	struct intVector clientsIds; // Vecteur pour les identifiants de clients
	struct intVector booksIds;   // Vecteur pour les identifiants de livres
};

// English Comment
// Creates a new collection of borrowed items.
// French Comment
// Crée une nouvelle collection d'éléments empruntés.
struct Borrowed NewBorrowed();

// English Comment
// Displays information about borrowed items.
// French Comment
// Affiche des informations sur les éléments empruntés.
void ShowBorrowed(struct  Borrowed* bb, struct   Books* bs, struct  Clients* ss);

// English Comment
// Borrows a book and updates the borrowed items collection.
// French Comment
// Emprunte un livre et met à jour la collection d'éléments empruntés.
void BorrowBook(struct Borrowed* bb, struct Books* bs, struct Clients* ss, int bookid, int userid);

// English Comment
// Returns a borrowed book and updates the borrowed items collection.
// French Comment
// Rend un livre emprunté et met à jour la collection d'éléments empruntés.
void ReturnBook(struct Borrowed* bb, struct Books* bs, struct Clients* cc, int bookid, int userid);