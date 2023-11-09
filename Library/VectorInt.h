#pragma once

#define INIT_VEC_SIZE 5
#define SQR(X) (X * X)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
Data-Oriented Design (DOD) is exemplified in this code, emphasizing efficient data organization and manipulation for optimal performance.
La Conception Orientée Données (COD) est illustrée dans ce code, mettant l'accent sur une organisation et une manipulation efficaces des données pour des performances optimales.
*/

// English Comment
// Represents a dynamic vector of integers.
// French Comment
// Représente un vecteur dynamique d'entiers.
struct intVector {
    int* vector; // Array of integers
    int size;    // Total size of the vector
    int used;    // Number of elements used in the vector
};

// English Comment
// Creates a new integer vector.
// French Comment
// Crée un nouveau vecteur d'entiers.
struct intVector NewIntVector();

// English Comment
// Adds an integer to the vector.
// French Comment
// Ajoute un entier au vecteur.
void appendToIntVector(struct intVector* v, int x);

// English Comment
// Retrieves an integer from the vector at a specified index.
// French Comment
// Récupère un entier du vecteur à un indice spécifié.
int getItemFromVector(struct intVector* v, int index);

// English Comment
// Updates an integer in the vector at a specified index.
// French Comment
// Met à jour un entier dans le vecteur à un indice spécifié.
void updateItemAtIndex(struct intVector* v, int index, int value);

// English Comment
// Removes an integer from the vector at a specified index.
// French Comment
// Supprime un entier du vecteur à un indice spécifié.
void removeFromIntVector(struct intVector* v, int index);