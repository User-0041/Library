#include "Clients.h"



struct myClient NewClient()
{
    struct  myClient c;
    c.subscription = 0;
    strcpy(c.name, "");
    return c;
}

 struct  Clients NewClients()
{
     struct  Clients cs;
     cs.borrowed = NewIntVector();
     cs.ids = NewIntVector();
     cs.names = NewStringVector();
     cs.subscriptions = NewIntVector();
     return cs;
}

 void PrintClient(struct Clients* c, int id) {
     printf("Client #%d: Books Borrowed: %d Subscription: %d Name: %s\n",
         getItemFromVector(&c->ids, id),
         getItemFromVector(&c->borrowed, id),
         getItemFromVector(&c->subscriptions, id),
         getItemFromStringVector(&c->names, id));
     printf("\n");
 }


struct myClient ReadClient() {
     struct myClient c;

     printf("Enter client's name (up to 40 characters): ");
     fgets(c.name, sizeof(c.name), stdin);

     // Remove the newline character at the end of the name
     size_t length = strlen(c.name);
     if (c.name[length - 1] == '\n') {
         c.name[length - 1] = '\0';
     }

     printf("Is the client subscribed (1 for Yes, 0 for No): ");
     int subscriptionInput;
     int x = scanf("%d", &subscriptionInput);

     // Clear the input buffer
     while (getchar() != '\n');

     c.subscription = (subscriptionInput == 1);

     return c;
 }

void AddClient(struct  myClient* c, struct  Clients* cs)
{
    appendToIntVector(&cs->borrowed, 0);
    appendToIntVector(&cs->subscriptions, 1);
    appendToStringVector(&cs->names, c->name);
    appendToIntVector(&cs->ids, cs->ids.used);
}

void SuspendClient(struct  myClient* c, struct Clients* cs)
{
    updateItemAtIndex(&cs->borrowed, c->id, 0);
}

void ActivateClient(struct  myClient* c, struct Clients* cs)
{
    updateItemAtIndex(&cs->borrowed, c->id, 1);
}
