#include <iostream>
using namespace std;

string
repeat(string str, int n)
{
  string x = "";
  for (int i = 0; i < n; ++i) {
    x += str;
  }
  return x;
}

int
main ()
{
  string s;
  int n;
  cout << "Enter string: ";
  cin >> s;
  cout << "Repeat this times: ";
  cin >> n;

  cout << repeat(s, n) << '\n';

  return 0;
}
