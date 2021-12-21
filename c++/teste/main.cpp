#include <iostream>

using namespace std;

int main()
{
  string name = "Breno";
  string *pont = &name;

  cout << *pont;
    return 0;
}
