#ifndef snacks_H
#define snacks_H
#include "commodity.h"
class snacks: public commodity
{
     private:
          char date[20];
          char producer[10];
          double weight;
     public:
          //snacks(char* na, int i, int n, int p, int t, char *d, char *pr, double w);
          snacks();
          void set(char*, char*, double);
          void show_list();
};

#endif
