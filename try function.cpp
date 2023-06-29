#include <iostream>
using namespace std;
 
int main()
{
   int x =1;
   cout << "patel \n";
   try {
      cout << "het \n";
      if (x==0)
      {
         throw x;
         cout << "s.";
      }
   }
   catch (int a ) {
      cout << "s. \n";
   }
 
   cout << "done \n";
   return 0;
}