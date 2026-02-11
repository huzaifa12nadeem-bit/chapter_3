#include <iostream>
#include <time.h> 
using namespace std;

int main() 
{
 
    cout << " " << endl;
    int a ;
    int x;             
    cout <<"First Value:" <<  endl;       
    cin >> x ; 
    int y;             
    cout <<"second Value:" <<  endl;       
    cin >> y ;
  
    a =   ( x / y ) ;
    cout  << "The final answer:" <<   endl; 
    cout << a << endl; 
    
    float b = a ;
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << b << endl; 

    
    
    return 0;
}
