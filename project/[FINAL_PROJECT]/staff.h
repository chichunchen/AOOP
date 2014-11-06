#ifndef staff_H
#define staff_H

class staff
{
     private:
          char name[20];
          int age;
          int staff_id;
     public:
          staff(char* na, int a, int st);
          void show_staff();
          void hire();
          int service_time();
};

#endif
