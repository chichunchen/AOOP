#ifndef commodity_H
#define commodity_H

class commodity
{
     private:
     char name[20];
     int id,num,price,type;
     
     public:
     int **array1;
     char ***array2;
     commodity();
     //commodity(char*,int,int,int,int);
     void set(char*,int,int,int,int);
     void show_list(int);
     int increase(int);
     int decrease(int);
     void search();
     
     int get_price();
     int get_num();;
};
#endif
