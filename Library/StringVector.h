#pragma once


#define INIT_VEC_SIZE 5
#define SQR(X) X*X
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



/*
Data-Oriented Design (DOD) is exemplified in this code, emphasizing efficient data organization and manipulation for optimal performance.
La Conception Orient�e Donn�es (COD) est illustr�e dans ce code, mettant l'accent sur une organisation et une manipulation efficaces des donn�es pour des performances optimales.
*/

// English Comment
// Represents a dynamic vector of strings.
// French Comment
// Repr�sente un vecteur dynamique de cha�nes de caract�res.
struct stringVector
{
	char** vector; // Array of strings
	int size;      // Total size of the vector
	int used;      // Number of elements used in the vector
};

// English Comment
// Creates a new string vector.
// French Comment
// Cr�e un nouveau vecteur de cha�nes de caract�res.
struct stringVector NewStringVector();

// English Comment
// Adds a string to the vector.
// French Comment
// Ajoute une cha�ne de caract�res au vecteur.
void appendToStringVector(struct stringVector* v, char c[]);

// English Comment
// Retrieves a string from the vector at a specified index.
// French Comment
// R�cup�re une cha�ne de caract�res du vecteur � un indice sp�cifi�.
char* getItemFromStringVector(struct stringVector* v, int index);

// English Comment
// Removes a string from the vector at a specified index.
// French Comment
// Supprime une cha�ne de caract�res du vecteur � un indice sp�cifi�.
void removeFromStringVector(struct stringVector* v, int index);