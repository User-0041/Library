#pragma once


#define INIT_VEC_SIZE 5
#define SQR(X) X*X
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



/*
Data-Oriented Design (DOD) is exemplified in this code, emphasizing efficient data organization and manipulation for optimal performance.
La Conception Orientée Données (COD) est illustrée dans ce code, mettant l'accent sur une organisation et une manipulation efficaces des données pour des performances optimales.
*/

// English Comment
// Represents a dynamic vector of strings.
// French Comment
// Représente un vecteur dynamique de chaînes de caractères.
struct stringVector
{
	char** vector; // Array of strings
	int size;      // Total size of the vector
	int used;      // Number of elements used in the vector
};

// English Comment
// Creates a new string vector.
// French Comment
// Crée un nouveau vecteur de chaînes de caractères.
struct stringVector NewStringVector();

// English Comment
// Adds a string to the vector.
// French Comment
// Ajoute une chaîne de caractères au vecteur.
void appendToStringVector(struct stringVector* v, char c[]);

// English Comment
// Retrieves a string from the vector at a specified index.
// French Comment
// Récupère une chaîne de caractères du vecteur à un indice spécifié.
char* getItemFromStringVector(struct stringVector* v, int index);

// English Comment
// Removes a string from the vector at a specified index.
// French Comment
// Supprime une chaîne de caractères du vecteur à un indice spécifié.
void removeFromStringVector(struct stringVector* v, int index);