#include <cstdio>
#include <iostream>

using namespace std;
int main() {
  int a, b, c;
  scanf("%d\t%d\n%d", &a, &b, &c);
  cout << a << '\n' << b << '\n' << c << endl;

  fscanf(stdin, "%d%d%d", &a, &b, &c);
  cout << a << '\n' << b << '\n' << c << endl;
}
