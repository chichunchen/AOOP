#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

void outputOriginal();
void opentext();
void closetext();
void outputResults();
int computeWord();
int computeCharacter();
int computeParagraph();
int computeLine();


ifstream infile;
char line1[1000];
int row;

void opentext()
{
	infile.open("Bonus.txt");			
}

void closetext()
{
	infile.close();
}

void outputOriginal()
{
	cout<<setw(18)<<"Output "<<endl<<endl<<"The original text:"<<endl;
	cout<<"=================="<<endl;
	while(infile.getline(line1,sizeof(line1),'.'))		
    {
    	cout<<line1<<"."; 			 
    }
}

void outputResults()
{
	cout<<"\n\nAlignment Results:"<<endl;
	cout<<"=================="<<endl;
	
	while(infile.getline(line1,sizeof(line1),'.'))		
    {
    	cout<<setw(row)<<line1<<"."; 			 
    }
    
}

void UI()
{
	cout<<"Please enter the row. "<<endl;
	cin>>row;
	
	opentext();
	outputOriginal();
	closetext();
	
	opentext();
	outputResults();
	closetext();
	
}

int main()
{		
	UI();
    
    system("pause");
	return 0;
}

int computeWord()
{
	
}

int computeCharacter()
{
	
}

int computeParagraph()
{
	
}

int computeLine()
{
	
}
