#include"Books.h"


struct Books NewBooks() {
    struct Books bs;
    bs.availabilities = NewIntVector();
    bs.ids = NewIntVector();
    bs.names = NewStringVector();
    bs.stocks = NewIntVector();
    return bs;
}

int getSize(struct Books *  bs) {
    return bs->ids.used;
}
struct Book readBookFromUser() {
    struct Book newBook;
    int x ;
    printf("Enter Book ID: ");
   x= scanf("%d", &newBook.id);

    printf("Enter Stock: ");
   x= scanf("%d", &newBook.stock);

    printf("Enter Book Name: ");
   x= scanf(" %[^\n]s", newBook.name);

    printf("Is the book available? (1 for yes, 0 for no): ");
  x=  scanf("%d", &newBook.availabilitie);

    return newBook;
}


void AppendBookToList(struct Book* c, struct Books* cs) {
    appendToIntVector(&cs->availabilities, c->availabilitie);
    appendToIntVector(&cs->stocks, c->stock);
    appendToStringVector(&cs->names, c->name);
    appendToIntVector(&cs->ids, cs->ids.used);
}


void PrintBookInfo(struct Books* bs, int id) {
    printf("Book #%d: Availability: %d Stock: %d Name: %s\n",
        getItemFromVector(&bs->ids, id),
        getItemFromVector(&bs->availabilities, id),
        getItemFromVector(&bs->stocks, id),
        getItemFromStringVector(&bs->names, id));
    printf("\n");
}

void ShowAvailable(struct Books* cs) {
    for (int i = 0; i < cs->ids.used ; i++)
    {   
        if (getItemFromVector(&cs->availabilities,i)){
            PrintBookInfo(cs, i);
        }
    }
}
void ShowNonAvailable(struct Books* cs) {
    for (int i = 0; i < cs->ids.used; i++)
    {
        if (!getItemFromVector(&cs->availabilities, i)) {
            PrintBookInfo(cs, i);
        }
    }
}