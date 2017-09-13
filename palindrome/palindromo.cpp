//Palindrome by Stone Yang (p6)
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char lone[81];
  char ltwo[81];
  cin.get(lone, 81);
  cin.get();
  cin.get(ltwo, 81);
  cin.get();

  if (strcmp(lone, ltwo) == 0)
    {
      cout << "same" << endl;
    }
  else
    {
      cout << "different" << endl;
    }
  return 0;
}
    
  //cout << lone << endl;
