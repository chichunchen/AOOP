#ifndef drinks_H
#define drinks_H
#include "commodity.h"

class drinks: public commodity
{
     private:
          char date[8];
          char producer[10];
     public:
          //drinks(char* na, int i, int n, int p, int t, char *d, char *pr);
          drinks();
          void set(char*, char*);
          void show_list();
};

#endif

