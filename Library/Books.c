#include"Books.h"


struct books NewBooks() {
    struct books bs;
    bs.availabilities = NewIntVector();
    bs.ids = NewIntVector();
    bs.names = NewStringVector();
    bs.stocks = NewIntVector();
    return bs;
}

int getSize(struct books *  bs) {
    return bs->ids.used;
}
struct book readBookFromUser() {
    struct book newBook;
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


void AppendBookToList(struct book* c, struct books* cs) {
    appendToIntVector(&cs->availabilities, c->availabilitie);
    appendToIntVector(&cs->stocks, c->stock);
    appendToStringVector(&cs->names, c->name);
    appendToIntVector(&cs->ids, cs->ids.used);
}


void PrintBookInfo(struct books* bs, int id) {
    printf("Book #%d: Availability: %d Stock: %d Name: %s\n",
        getItemFromVector(&bs->ids, id),
        getItemFromVector(&bs->availabilities, id),
        getItemFromVector(&bs->stocks, id),
        getItemFromStringVector(&bs->names, id));
    printf("\n");
}

void ShowAvailable(struct books* cs) {
    for (int i = 0; i < cs->ids.used ; i++)
    {   
        if (getItemFromVector(&cs->availabilities,i)){
            PrintBookInfo(cs, i);
        }
    }
}
void ShowNonAvailable(struct books* cs) {
    for (int i = 0; i < cs->ids.used; i++)
    {
        if (!getItemFromVector(&cs->availabilities, i)) {
            PrintBookInfo(cs, i);
        }
    }
}