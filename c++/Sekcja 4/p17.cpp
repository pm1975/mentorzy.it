#include <iostream>

using namespace std;

int main()
{
  int nazwaZmiennej = 100;
  int nazwaZmiennej2(200);

  int nazwaZmiennej3{300};
  int nazwaZmiennej4 = {400};

  cout << nazwaZmiennej << endl;
  cout << nazwaZmiennej2 << endl;
  cout << nazwaZmiennej3 << endl;
  cout << nazwaZmiennej4 << endl;
  return 0;
}