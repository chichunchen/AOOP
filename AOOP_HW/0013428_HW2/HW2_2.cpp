#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>							//�B�z�ɮת���J 
#include <locale>
#include <cctype>
using namespace std;

void swap( char &c1 , char &c2 ) {  char temp=c1;	c1=c2;	  c2=temp;	}	//��r�꤬��

string reverse( const string &s ) {    							// ex: "abc"-->"cba"
	string s2=s;												//���O��ǨӤ��r�� 
	int length=s2.length();										//�ΨӰO��r�ꤧ����
	for(int i=0,j=length-1; i<j; i++,j--) swap(s2[i],s2[j]);	//�N�r��v�Ӵ��� 
	return s2;
}

string removePunct( const string &s) { 			//�ɮס]�r��^��, ���I�Ÿ��h�� 
	string s2=s;
	string s3;
	for(int i=0; i<s2.length(); i++) if(ispunct(s2[i])) s2[i]=NULL;		//�N���I�Ÿ��ഫ���ť� 
	for(int i=0; i<s2.length(); i++) if(s2[i]==NULL) s3+=s2.substr(i,1);	//�h���ť� 
	return s3;
}

string makeLower( const string &s ) {		//uses <cctype> ex: "ABC" ==>"abc"
	string s2=s;
	int i=0;
	while(s2[i]) {
		if(isupper(s2[i])) s2[i]=tolower(s2[i]);
		i++;
	}
	return s2;
}

bool isPalin( const string &s ) {     		// check�r��O�_�Opalindrome?
	string s1, s2;
	s1=removePunct(makeLower(s));
    s2=reverse(removePunct(makeLower(s)));
	if(s1==s2) return true;
	else return false;
}

int main()
{
    ifstream infile;
    char line1[1000];
    infile.open("palindrome.txt");			
    
    while(infile.getline(line1,sizeof(line1),'\n'))		//�Nline1 cin�i�h�A�J��'\n'���U�� 
    {
         cout<<"["<<line1<<"] is";
         if(isPalin(line1)==1) cout<<" palin."<<endl;
         else  cout<<" not palin."<<endl;
    }
    
    infile.close();
    system("pause");
	return 0;
}


