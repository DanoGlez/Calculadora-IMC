#include <iostream>
using namespace std;

int main()
{
  float altura, peso;
  cout << "Introduce tu estatura (en cm): ";
  cin >> altura;
  cout << "Introduce tu peso (en kg): ";
  cin >> peso;
  cout << "Dame un segundo para calcular..." << endl;
  float alturam = altura / 100;
  float alturam2 = alturam * alturam;
  float x = peso / alturam2;

  if (x <= 18.4)
  {
    cout << "Tu IMC es inferior a los valores normales.";
  }
  else if (x >= 18.5 && x <= 24.9)
  { // Corrección en la condición
    cout << "Tu IMC está dentro de los valores normales.";
  }
  else
  {
    cout << "Tu IMC es superior a los valores normales.";
  }

  cout << endl
       << "¿Quieres saber cuál es?" << endl;
  cout << "1 = Si" << endl;
  cout << "2 = No" << endl;
  int d;
  cin >> d;

  if (d == 1)
  {
    cout << "Tu IMC es: " << x << endl; // Mostrar IMC nuevamente
  }
  else
  {
    return 0;
  }
}
