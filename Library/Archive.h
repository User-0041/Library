#pragma once
#include "Books.h"
#include "Clients.h"
#include "Ledger.h"


struct Meta
{
	int NumberOfBooks;
	int NumberOfClinets;
	int NumberOfLedger;
};
struct Archive {
	
	struct Meta archiveMeta;
	struct Books * archiveBooks;
	struct Clients* archiveClinets;
	struct Ledger* archiveLeder;
};
struct  Meta NewMeta(struct Books* bs, struct Clients* cs, struct   Ledger* ls);
struct Archive CreateArchive(struct Meta  meta , struct Books * bs , struct Clinets * cs , struct   Ledger * ls );
void  ReadArchive(struct Meta, struct Archive  );
void  UpdateArchive(struct Meta, struct Books* bs, struct Clinets* cs, struct   Ledger* ls);



