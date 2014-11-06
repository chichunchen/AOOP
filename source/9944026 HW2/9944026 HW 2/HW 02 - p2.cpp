#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string reverse( const string &s );
string removePunct( const string &s);
string makeLower( const string &s );

int main()
{
    ifstream infile;
    char line1[1000];
    infile.open("test.txt");
    
    while(infile.getline(line1,sizeof(line1),'\n'))
    {
         cout<<"["<<line1<<"] is";
         
         string s1,s2;
         
         s1=reverse(makeLower(removePunct(line1)));
         s2=makeLower(removePunct(line1));
             
         if(s1==s2)
              cout<<" palin."<<endl;
         else
              cout<<" not palin."<<endl;
    }
     return 0;
}

string reverse(const string &s)
{
     string c3;
     char temp;
     int i,j,length;
     
     c3=s;
     length=c3.length();
     
     for(i=0,j=length-1 ; i<j ; i++,j--)
     {
          temp=c3[i];
          c3[i]=c3[j];
          c3[j]=temp;
     }
     
     return c3;
}

string removePunct( const string &s)
{
     string c4;
     c4=s;
     
     string c5;
     c5=c4;     
     int length;
     length=c4.length();
     
     for(int i=0;i<length;i++)
     {
          if(c4[i]<=64 && c4[i]>=32)
          {
              c5=c4.erase(i,1);
              i--;
          }
          else
              continue;
     }
     
     return c5;
}

string makeLower( const string &s )
{
     string c6;
     c6=s;
     
     int length;
     length=c6.length();
     
     for(int i=0;i<length;i++)
     {
          if(c6[i]<=90 && c6[i]>=65)
               c6[i]+=32;
          else
              continue;
     }
     
     return c6;
     
}
     
