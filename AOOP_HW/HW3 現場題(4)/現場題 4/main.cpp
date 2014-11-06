#include <iostream>
#include <cstdlib>
#include "components.h"


using namespace std;

int main()
{
    Supply a(5,5);
    components res(Brown, Brown, Brown);
    res << a;
    res >>1000; 
    
    system("pause");
    return 0;    
}
