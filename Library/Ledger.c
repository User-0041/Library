#include"Ledger.h"

struct Borrowed NewBorrowed() {
	struct Borrowed b;
	b.booksIds = NewIntVector();
	b.clientsIds = NewIntVector();
	return b;
}

void ShowBorrowed(struct  Borrowed* bb, struct   Books* bs ,struct  Clients* ss) {
	printf("The Borrwed Books\n");
	for (int i = 0; i < bb->booksIds.used ;  i++)
	{
		PrintBookInfo(bs, getItemFromVector(&bb->booksIds,i));
		PrintClient(ss, getItemFromVector(&bb->clientsIds, i));
	}
}

void BorrowBook(struct Borrowed* bb, struct Books* bs, struct Clients* ss, int bookid, int userid){
	if ( (getItemFromVector(&ss->borrowed, userid) > 5) )
	{
		return;
	}
	appendToIntVector(&bb->booksIds, bookid);
	appendToIntVector(&bb->clientsIds, userid);
}

void ReturnBook(struct  Borrowed* bb, struct Books * bs,struct Clients * cc , int bookid, int userid) {
	for (int i = 0; i <= bb->booksIds.used;  i++)
	{
		if ((getItemFromVector(&bb->booksIds, i) == bookid) && (getItemFromVector(&bb->clientsIds, i) == userid)) {
			removeFromIntVector(&bb->booksIds, i);
			removeFromIntVector(&bb->clientsIds, i);
			return;
		}
		
	}
	printf(ERROR_CANT_RETURN);
	return;
}