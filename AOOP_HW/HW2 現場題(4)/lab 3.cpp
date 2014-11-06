#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

namespace String_def
{
    enum function {REPLACE = 1, SWAP = 2, DISPLAY = 4};      
    
    class my_String {
    public:
        string line; 
        my_String (char * docname){
            char temp[1000];
            ifstream infile;
            infile.open(docname);
            infile.getline(temp, sizeof(temp));
            line = temp;
            infile.close();
        }
        void operation(int todo, string word1, string word2){
             int mask = 1;
             if((todo & REPLACE)==REPLACE) 
                 replace(word1, word2); 
             if((todo & SWAP)==SWAP) 
                 swap(word1, word2); 
             if((todo & DISPLAY)==DISPLAY) 
                 display();
        }          
        void replace(string word1, string word2){   //word1 = time, word2 = XXXXXXX
             int f1 = line.find(word1);
             do{
             	 line.erase(f1, word1.length());
                 line.insert(f1, word2);
                 f1 = line.find(word1);
             } while(f1 > 0);
        }
        void swap(string word1, string word2){
             int f1 = line.find(word1);
             int f2 = line.find(word2);
             
             line.erase(f2, word2.length());
             line.insert(f2, word1);
             
             line.erase(f1, word1.length());
             line.insert(f1, word2);
        }
        void display(){
             cout<<line<<endl;                              
        }
    };          
}

using namespace String_def;

int main(){
    char * filename="test.txt";
    my_String st(filename);
    cout << "swap hours and minutes" <<endl<<endl;
    st.operation(SWAP|DISPLAY,"hours","minutes");
    cout <<endl<< "swap hours and seconds" <<endl<<endl;
    st.operation(SWAP|DISPLAY,"hours","seconds");
    cout <<endl<< "replace time to XXXXXXX" <<endl<<endl;
    st.operation(REPLACE|DISPLAY,"time","XXXXXXX");
    //system("pause");
    return 0;
}
