#include <iostream>
using namespace std;
class operation
{
    int a,b,add,sub,mul;
    float div;
public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};
inline void operation :: get()
{
    cout << "Enter first value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
}
  
inline void operation :: sum()
{
    
    cout << "Addition of two numbers: " << a+b << "\n";
}
  
inline void operation :: difference()
{

    cout << "Difference of two numbers: " << a-b << "\n";
}
  
inline void operation :: product()
{
    cout << "Product of two numbers: " << a*b << "\n";
}
  
inline void operation ::division()
{

    cout<<"Division of two numbers: "<<a/b<<"\n" ;
}
  
int main()
{
    cout << "Program using inline function\n";
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.division();
    return 0;
}