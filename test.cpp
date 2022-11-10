#include <iostream>
using namespace std;


int main(){
  
//int a = 5;
//int b = 20;
//int ad = a + b;
//int mu = a * b;
//int su = a - b;
//int di = b / a; 

  //cout << a << " + " << b << " = " << ad << endl;
  //cout << a << " * " << b << " = " << mu << endl;
  //cout << a << " - " << b << " = " << su << endl;
  //cout << b << " / " << a << " = " << di << endl;



 // int priNum, area, perimet;  
 // cout << "Entre um lado do quadrado: ";
 // cin >> priNum 
 // area = priNum * priNum;
 // perimet = (priNum*4);
 // cout << " O perimetro do quadrado é = " << perimet << endl ;     
 // cout << " A area do quadrado é = " << area << endl ;    



 //  int priNum, segNum, areaT;  
 // cout << "Entre a base e altura do triangulo: ";
 // cin >> priNum >> segNum ;
 // areaT = (priNum * segNum) / 2 ;
 //  cout << " A area do triangulo é = " << areaT << endl ;   
  
    int a, b;
    std::cout << "Por favor entre dois numeros: ";
    std::cin >> a >> b;

    if (a < b) {  
        cout << b << " É maior que " << a << endl; 
          cout << a << " É menor que " << b << endl; 
    }

    if (a > b){ cout << a << " É maior que " << b << endl; 
    cout << b << " É menor que " << a << endl; 
    }

    if (a == b){ cout << a << " É igual a " << b << endl; 
 
    }


  return 0;
}
