#include <iostream>  
using namespace std;

string convert(string s)
{
	int n = s.length();

	int res_ind = 0;

	for (int i = 0; i < n; i++) {

		if (s[i] == '-' || s[i] == '_') {

			s[i + 1] = toupper(s[i + 1]);
			continue;
		} 
		else
			s[res_ind++] = s[i];
	} 
	return s.substr(0, res_ind);
}
 
int main()
{
	string str = "-the-stealth-war";
	cout << convert(str);
	return 0;
}
