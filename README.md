#Copyright Armasu Octavian 315CA
# Proiect-PCLP3
Phonebook in C

  Am implentat o agenda telefonica in C folosind un vector de structuri ce se realloca la fiecare adaugare a unui nou contact.

  Operatiile care fi efectuate:
   
    -> OPEN_CONTACTS: data la inceput pentru a adauga contacte in lista. Orice
     comanda ce va fi data inainte de aceasta va afisa un mesaj de eroare.
    -> CLOSE_CONTACTS: se da la final de prgram pentru a elibera toate
     resursele folosite
    -> ADD <name> <phone_number>: adauga in lista noul contact cu datele
     primite. Daca exista deja un contact cu acel nume se va afisa un mesaj
     de eroare
    -> SIZE: afiseaza numarul de contacte din lista
    -> SHOW_NUMBER <name>: va afisa numarul de telefon al contactului cu numele
     dat. Daca lista e goala se va afisa mesaj de eroare. 
    -> SHOW_CONTACTS: afiseaza numele si numarul de telefon al tuturor 
    contactelor. Daca lista este goala se afiseaza mesaj de eroare.
    -> DELETE <name>: sterge contactul cu numele dat. Daca nu exista contact
    cu acel nume se va afisa mesaj de eroare
    -> SORT: sorteaza alfabetic contactele.
    -> Daca va fi introdusa orice alta comanda se va afisa mesaj de eroare
    "Invalid command".
    
      
    
