#include<iostream>
#include<cmath>

using namespace std;


// функция повторяющегося арифметического выражения
double formula(double a, double b)
{
    return pow( sin( a ), 2 ) + pow( sin( b ), 2 );
}


int main()
{
    // исходные данные
    double a = -2, b = 1.25;
    // вычислить значение z = 0.2913
    
    const double pi = 3.1415;
    double x, c, v, z, rounded;
    
    // разделение выражения на 3 части 
    x = sqrt( formula( 8*pi/180, a ) ); 
    c = formula( pi, b );
    v = a * ( formula( a * b, 2 * b ) );
    z = x + c / v;
    
    // округление числа
    rounded = round( z*10000 ) / 10000;
    
    // вывод
    cout << "a = " << a << "; b = " << b << endl;
    cout << "z = " << rounded << endl;
    
    return 0;
}
