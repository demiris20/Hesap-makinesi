
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	while (true) {
        float a, b;
        cout << "Bir sayi giriniz :";
        cin >> a;
        int x;
        cout << "Isleminizi tuslayiniz\nToplama islemi=1\nCikarma islemi=2\nBolme islemi=3\nCarpma islemi=4\n";
        cin >> x;
        if (x > 4 || x<1) {
            cout << "baska bir sayi giriniz!!!!!!!!!!!!!!!!!\n";
            continue;
        }
        cout << "Bir sayi giriniz :";
        cin >> b;
        float y;
        if (x == 1) {
            y = a + b;
            cout << y << endl;
        }
        else if (x == 2) {
            y = a - b;
            cout << y << endl;
        }
        else if (x == 3) {
            y = a / b;
            cout << y << endl;
        }
        else if (x == 4) {
            y = a * b;
            cout << y << endl;
        }
        
        string son = "y";
        string _son;
        cout << "devam etmek istiyor musunuz?        (y/n)\n";
        cin >> _son;
        if (son != _son) {
            break;
    }
  

 }
}
