#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

string reverseWord(string str)
{
  string revstr;
  for(int i=str.length()-1;i>=0;i--)
  {
      revstr = revstr + str[i];
  }
  return revstr;
}
