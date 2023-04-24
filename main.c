#include "phone.h"
#define STRING 100
int main(void) {
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
      printf("Contacts opened\n");
    }
    if (strcmp(command, "ADD") == 0) {
      ok = 1;
      char name[STRING];
      char phonenumber[STRING];
      scanf("%s", name);
      scanf("%s", phonenumber);

      if (opp == 0) {
        printf("Contacts not open\n");
        continue;
      }
      p = realloc(p, (++size) * sizeof(phone));
      int verif = verify(p, name, size);
      if (verif == 1)
        add(p, name, phonenumber, size);
      else {
        printf("Contact already exists\n");
        size--;
      }
    }
    if (strcmp(command, "CLOSE_CONTACTS") == 0) {
      if (opp == 0) {
        printf("Contacts not open\n");
        continue;
      }
      ok = 1;
      break;
    }
    if (strcmp(command, "SIZE") == 0) {
      if (opp == 0) {
        printf("Contacts not open\n");
        continue;
      }
      ok = 1;
      printf("Size: %d\n", size);
    }
    if (strcmp(command, "SHOW_CONTACTS") == 0) {
      if (opp == 0) {
        printf("Contacts not open\n");
        continue;
      }
      ok = 1;
      print(p, size);
    }
    if (strcmp(command, "SHOW_NUMBER") == 0) {
      ok = 1;
      char name[STRING];
      scanf("%s", name);

      if (opp == 0) {
        printf("Contacts not open\n");
        continue;
      }
      show(p, name, size);
    }
    if (ok == 0) {
      printf("Invalid command\n");
    }
  }
}