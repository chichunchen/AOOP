#include <iostream>
using namespace std;

namespace Box
{
     float length,width,height;
     float v;
     void volume()
     {
          v=length*width*height;
          cout<<"Volume = "<<v<<endl;
     }
}

namespace
{
     float l,w,h;
     float max=0;
     float min=0;
     
     void compare()
     {
          max=l;
          if(w>l)
          {
               max=w;
               if(h>w)
                    max=h;
          }
          
          if(h>l)
          {
               max=h;
               if(w>h)
                    max=w;
          }
          
          min=l;
          if(w<l)
          {
               min=w;
               if(h<w)
                    min=h;
          }
          
          if(h<l)
          {
               min=h;
               if(w<h)
                    min=w;
          }
     }
     
     void print()
     {
          cout<<"Largest  : "<<max<<endl;
          cout<<"Smallest : "<<min<<endl;
     }
}
int main()
{
    cout<<"Enter the length :";
    cin>>Box::length;
    cout<<endl;
    cout<<"the width :";
    cin>>Box::width;
    cout<<endl;
    cout<<"and the height :";
    cin>>Box::height;
    cout<<endl;
    
    Box::volume();
    
    l=Box::length;
    w=Box::width;
    h=Box::height;
    
    compare();
    print();
    
    return 0;
}
