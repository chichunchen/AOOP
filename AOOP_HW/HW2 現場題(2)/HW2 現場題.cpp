#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

namespace String_def
{
	enum Size { Upper, Lower };
	
	string read_from_file (char * doc_Name) {
		char line[1000];
		ifstream infile;
		infile.open(doc_Name);
		infile.getline(line, sizeof(line));
		return line;		//char to string
	}
	 
	int count_word(string  data) {
		int count = 1;
		for(int i=0; i<data.length(); i++) 
			if(data[i]==32) count++;
		
		return count;			//字數為空格數+1 
	}
	
	string convert(string data, int size) {
		if(size == Upper) 
			for(int i=0; i<data.length(); i++) 
				data[i] = toupper(data[i]);
		else if(size == Lower) 
			for(int i=0; i<data.length(); i++) 
				data[i] = tolower(data[i]);
	
		return data;
	}
}

using namespace String_def;

int main()
{
	char * filename = "test.txt";
  	string data = read_from_file(filename);			//char to string
  	int num = count_word(data);
  	string upper = convert(data,Upper);
  	string lower = convert(data,Lower);
    
  	cout << "Filename:  "<<filename<<endl <<endl;
  	cout << "Word Count:  "<<num <<endl <<endl;
  	cout << "Conver to Upper:"<<endl<< upper <<endl <<endl;
  	cout << "Convert to Lower:"<<endl<< lower <<endl <<endl;
    
  	system("pause");
  	return 0;
}
