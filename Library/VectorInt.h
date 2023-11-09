#pragma once

#define INIT_VEC_SIZE 5
#define SQR(X) (X * X)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
Data-Oriented Design (DOD) is exemplified in this code, emphasizing efficient data organization and manipulation for optimal performance.
La Conception Orient�e Donn�es (COD) est illustr�e dans ce code, mettant l'accent sur une organisation et une manipulation efficaces des donn�es pour des performances optimales.
*/

// English Comment
// Represents a dynamic vector of integers.
// French Comment
// Repr�sente un vecteur dynamique d'entiers.
struct intVector {
    int* vector; // Array of integers
    int size;    // Total size of the vector
    int used;    // Number of elements used in the vector
};

// English Comment
// Creates a new integer vector.
// French Comment
// Cr�e un nouveau vecteur d'entiers.
struct intVector NewIntVector();

// English Comment
// Adds an integer to the vector.
// French Comment
// Ajoute un entier au vecteur.
void appendToIntVector(struct intVector* v, int x);

// English Comment
// Retrieves an integer from the vector at a specified index.
// French Comment
// R�cup�re un entier du vecteur � un indice sp�cifi�.
int getItemFromVector(struct intVector* v, int index);

// English Comment
// Updates an integer in the vector at a specified index.
// French Comment
// Met � jour un entier dans le vecteur � un indice sp�cifi�.
void updateItemAtIndex(struct intVector* v, int index, int value);

// English Comment
// Removes an integer from the vector at a specified index.
// French Comment
// Supprime un entier du vecteur � un indice sp�cifi�.
void removeFromIntVector(struct intVector* v, int index);