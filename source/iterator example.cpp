#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <functional>
using namespace std;

int main()
{
	istream_iterator<int>input(cin);
	istream_iterator<int>end_of_stream;
	vector<int>vec;
	
	copy(input, end_of_stream, inserter(vec, vec.begin()));
	sort(vec.begin(), vec.end(), greater<int>());
	
	ostream_iterator<int>output(cout," "); 
	unique_copy(vec.begin(), vec.end(), output); cout<<endl;
	copy(vec.begin(), vec.end(), output); cout<<endl;
	
	return 0;
}
