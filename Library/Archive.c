#include"Archive.h"

struct  Meta NewMeta(struct Books* bs, struct Clients* cs, struct   Ledger* ls) {
	struct Meta m; 
	m.NumberOfBooks = bs->availabilities.size;
	m.NumberOfClinets = cs->ids.size;
	m.NumberOfBooks = ls->booksIds.used;
}

