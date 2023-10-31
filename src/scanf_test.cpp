#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
int main() {
  int a, b, c;
  scanf("%d\t%d\n%d", &a, &b, &c);
  cout << a << '\n' << b << '\n' << c << endl;

  fscanf(stdin, "%d%d%d", &a, &b, &c);
  cout << a << '\n' << b << '\n' << c << endl;

  char *chstr;
  string str;
  cin.getline(chstr, 5);
  getline(cin, str);
}
