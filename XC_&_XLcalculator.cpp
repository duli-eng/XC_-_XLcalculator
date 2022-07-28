#include <iostream>

using namespace std;

int main()
{
    float PI,XL,XC,C,f,L; //variable declarations

        
        cout << "L:";  
      cin >> L ;
        cout << "C: ";       
      cin >> C;        
        cout << "f: ";       
      cin >> f;


      PI = 3.14159265359;
      XL = 2 * PI * f * L ; 
      XC = 1/(2 * PI * f * C);

        cout << "PI = "  << PI << endl;                  //displays pi
        cout << "L = "  << L << "Henry" << endl;        //displays inductance 
        cout << "XL = " << XL << "Ohms" << endl;       //displays inductive reactance
        cout << "XC = " << XC <<"Ohms" << endl;       //displays Capacitive reactance
        cin.get();                                   //Keeps the DOS running until "enter" key is pressed 
    return 0;    
}
