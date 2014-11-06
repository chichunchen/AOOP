#ifndef daily_necessities_H
#define daily_necessities_H
#include "commodity.h"
class daily_necessities: public commodity
{
     private:
          char date[20];
          char producer[10];
     public:
          //daily_necessities(char* na, int i, int n, int p, int t, char* d, char* pr);
          daily_necessities();
          void set(char*, char*);
          void show_list();
};

#endif
