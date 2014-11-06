#ifndef consumer_H
#define consumer_H

class consumer
{
     private:
          int money;
          bool purchase_list;
     public:
          consumer(int m);
          void set_money();
          void buy();
          void show_buy();
          void show_money();
          void reset();
};      

#endif
