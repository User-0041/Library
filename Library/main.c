#include"Clients.h"
#include"Books.h"
#include "Ledger.h"


/*
Data-Oriented Design (DOD) focuses on efficiently organizing and manipulating data structures for optimal performance, contrasting with Object-Oriented Design (OOD). Key principles:

1. **Data-Centric:** DOD prioritizes well-structured data for efficient algorithms and improved performance.

2. **Contiguous Memory:** Encourages contiguous memory for enhanced cache locality, reducing memory access times.

3. **Batch Processing:** Favors batch processing and large dataset manipulation for improved parallelism and vectorization.

4. **Minimal Abstraction:** Minimizes abstraction for a clearer view of data storage and processing.

5. **Performance-Driven:** Prioritizes speed and efficiency, suitable for game development, simulations, and scientific computing.

6. **Struct of Array:** Utilizes "struct of array" for improved cache utilization and efficient parallel processing.

7. **Data Alignment:** Aligns data structures with the target platform's memory architecture for optimized access.

8. **Data Decomposition:** Breaks down complex structures into simpler components, supporting better parallelization and algorithm efficiency.

9. **Data-Oriented Patterns:** Encourages specific patterns for efficient data processing, including parallel loops and SIMD operations.

This code demonstrates a data-oriented approach using structured data types (e.g., struct intVector, struct stringVector) and functions tailored for efficient data manipulation. It adheres to principles aligned with Data-Oriented Design.
*/



/*
La Conception Orient�e Donn�es (COD) se concentre sur l'organisation et la manipulation efficaces des structures de donn�es pour des performances optimales, en contraste avec la Conception Orient�e Objet (COO). Principes cl�s :

1. **Centr�e sur les Donn�es :** La COD privil�gie des structures de donn�es bien organis�es pour des algorithmes efficaces et des performances am�lior�es.

2. **M�moire Contigu� :** Encourage l'utilisation de m�moire contigu� pour une meilleure localit� du cache, r�duisant les temps d'acc�s � la m�moire.

3. **Traitement par Lots :** Favorise le traitement par lots et la manipulation de grands ensembles de donn�es pour une meilleure parall�lisation et vectorisation.

4. **Abstraction Minimale :** Minimise l'abstraction pour une vision plus claire du stockage et du traitement des donn�es.

5. **Orient�e Performance :** Priorise la vitesse et l'efficacit�, adapt�e au d�veloppement de jeux, aux simulations et au calcul scientifique.

6. **Structures d'Arrays :** Utilise souvent la "struct of array" pour une meilleure utilisation du cache et un traitement parall�le efficace.

7. **Alignement des Donn�es :** Aligne les structures de donn�es sur l'architecture m�moire de la plateforme cible pour optimiser l'acc�s � la m�moire.

8. **D�composition des Donn�es :** D�compose les structures complexes en composants simples, favorisant une meilleure parall�lisation et l'efficacit� des algorithmes.

9. **Motifs Orient�s Donn�es :** Encourage l'utilisation de motifs sp�cifiques pour un traitement efficace des donn�es, incluant des boucles parall�les et des op�rations SIMD.

Ce code illustre une approche orient�e donn�es avec l'utilisation de types de donn�es structur�s (par ex., struct intVector, struct stringVector) et de fonctions adapt�es � une manipulation efficace des donn�es. Il respecte des principes en accord avec la Conception Orient�e Donn�es.
*/






int main() {
    
    struct Books myLibrary = NewBooks();
    struct Book book1 = { 1, 10, "DasCapital", 1 };
    struct Book book2 = { 2, 5, "WealthOfNations", 0 };
    struct Book book3 = { 3, 15, "HistoryOfModernCapital", 1 };

    AppendBookToList(&book1, &myLibrary);
    AppendBookToList(&book2, &myLibrary);
    AppendBookToList(&book3, &myLibrary);
    

    for (int i = 0; i < myLibrary.ids.used; i++) {
        PrintBookInfo(&myLibrary, i);
    }


    struct Clients myClientList = NewClients();
    struct myClient client1 = { 1, "Ahmed Mekni", 0 };
    struct myClient client2 = { 2, "Mar Wan", 1 };
    struct myClient client3 = { 3, "Carl Marx", 0 };

    AddClient(&client1, &myClientList);
    AddClient(&client2, &myClientList);
    AddClient(&client3, &myClientList);

    for (int i = 0; i < myClientList.ids.used; i++) {
        PrintClient(&myClientList, i);
    }



    struct Ledger myLedger = NewBorrowed();

    BorrowBook(&myLedger, &myLibrary , &myClientList, 1, 1);
    BorrowBook(&myLedger, &myLibrary, &myClientList, 0, 1);
    ShowBorrowed(&myLedger, &myLibrary , &myClientList);

    ReturnBook(&myLedger, &myLibrary, &myClientList, 0, 1);


    ShowBorrowed(&myLedger, &myLibrary , &myClientList );

    
}