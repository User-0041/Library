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
La Conception Orientée Données (COD) se concentre sur l'organisation et la manipulation efficaces des structures de données pour des performances optimales, en contraste avec la Conception Orientée Objet (COO). Principes clés :

1. **Centrée sur les Données :** La COD privilégie des structures de données bien organisées pour des algorithmes efficaces et des performances améliorées.

2. **Mémoire Contiguë :** Encourage l'utilisation de mémoire contiguë pour une meilleure localité du cache, réduisant les temps d'accès à la mémoire.

3. **Traitement par Lots :** Favorise le traitement par lots et la manipulation de grands ensembles de données pour une meilleure parallélisation et vectorisation.

4. **Abstraction Minimale :** Minimise l'abstraction pour une vision plus claire du stockage et du traitement des données.

5. **Orientée Performance :** Priorise la vitesse et l'efficacité, adaptée au développement de jeux, aux simulations et au calcul scientifique.

6. **Structures d'Arrays :** Utilise souvent la "struct of array" pour une meilleure utilisation du cache et un traitement parallèle efficace.

7. **Alignement des Données :** Aligne les structures de données sur l'architecture mémoire de la plateforme cible pour optimiser l'accès à la mémoire.

8. **Décomposition des Données :** Décompose les structures complexes en composants simples, favorisant une meilleure parallélisation et l'efficacité des algorithmes.

9. **Motifs Orientés Données :** Encourage l'utilisation de motifs spécifiques pour un traitement efficace des données, incluant des boucles parallèles et des opérations SIMD.

Ce code illustre une approche orientée données avec l'utilisation de types de données structurés (par ex., struct intVector, struct stringVector) et de fonctions adaptées à une manipulation efficace des données. Il respecte des principes en accord avec la Conception Orientée Données.
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