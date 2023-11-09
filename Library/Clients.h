#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include "StringVector.h"
#include "VectorInt.h"
/*
Data-Oriented Design (DOD) is exemplified in this code, emphasizing efficient data organization and manipulation for optimal performance.
La Conception Orientée Données (COD) est illustrée dans ce code, mettant l'accent sur une organisation et une manipulation efficaces des données pour des performances optimales.
*/

// English Comment
// Represents a collection of clients with dedicated vectors for ids, borrowed books, names, and subscriptions.
// French Comment
// Représente une collection de clients avec des vecteurs dédiés pour les identifiants, les livres empruntés, les noms et les abonnements.
struct Clients
{
	struct intVector ids;           // Vecteur pour les identifiants de clients
	struct intVector borrowed;      // Vecteur pour les livres empruntés par les clients
	struct stringVector names;      // Vecteur pour les noms de clients
	struct intVector subscriptions; // Vecteur pour les abonnements des clients
};

// English Comment
// Defines individual client entities with id, name, and subscription attributes.
// French Comment
// Définit des entités de client individuelles avec des attributs d'identifiant, de nom et d'abonnement.
struct myClient
{
	int id;                         // Identifiant du client
	char name[40];                  // Nom du client
	int subscription;               // Abonnement du client
};

// English Comment
// Creates a new client entity.
// French Comment
// Crée une nouvelle entité client.
struct myClient NewClient();

// English Comment
// Reads a client entry from the user.
// French Comment
// Lit une entrée client depuis l'utilisateur.
struct myClient ReadClient();

// English Comment
// Creates a new collection of clients.
// French Comment
// Crée une nouvelle collection de clients.
struct Clients NewClients();

// English Comment
// Prints information about a specific client.
// French Comment
// Imprime des informations sur un client spécifique.
void PrintClient(struct Clients* c, int id);

// English Comment
// Adds a client to the collection.
// French Comment
// Ajoute un client à la collection.
void AddClient(struct myClient* c, struct Clients* cs);

// English Comment
// Suspends a client's subscription.
// French Comment
// Suspend l'abonnement d'un client.
void SuspendClient(struct myClient* c, struct Clients* cs);

// English Comment
// Activates a client's subscription.
// French Comment
// Active l'abonnement d'un client.
void ActivateClient(struct myClient* c, struct Clients* cs);

