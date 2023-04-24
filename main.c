#include "phone.h"
#define STRING 100
int main() {
  int ok;
  int opp = 0;
  int size = 0;
  char command[STRING];
  phone *p = NULL;
  while (1) {
    ok = 0;
    scanf("%s", command);
    if (strcmp(command, "OPEN_CONTACTS") == 0) {
      ok = 1;
      opp = 1;
      int index;
      scanf("%d", &index);
      phone *p = malloc(index * sizeof(*p));
    }
    if (strcmp(command, "ADD") == 0) {
      ok = 1;
      if (opp == 0) {
        printf("Contacts not open\n");
        return;
      }

      char name[STRING];
      char phonenumber[STRING];
      scanf("%s", name);
      scanf("%s", phonenumber);
      add(p, name, phonenumber, size);
      size++;
    }
    if (strcmp(command, "CLOSE_CONTACTS") == 0) {
      ok = 1;
      opp = 0;
      free(p);
    }
  }