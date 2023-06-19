#include<iostream>
#include<cmath>

using namespace std;

// функция
double func (double x)
{
    return pow ( log( x * sqrt( x ) ), 2 ) - exp( -x );
}


int main()
{
    // переменные для хранения исходных данных
    double xmin, xmax, dx;
    
    double x, y;
    
    // переменная для хранения произведения отрицательных значений функции
    double multiplyResult = 1; 
    
    // ввод исходных данных
    cout << "Введите значения (через пробел):: XMIN, XMAX, DX" << endl;
    cin >> xmin >> xmax >> dx;
    
    cout << endl;
    cout << "Границы интервала" << endl;
    cout << xmin << " <= x <= " << xmax << endl; 
    cout << "шаг dx = " << dx << endl;
    cout << endl;
    
    cout << "Таблица" << endl;
    cout << "   y     x  " << endl;
    for (x = xmin; x <= xmax; x += dx)
    {
        y = func( x );
        cout << "| " << x << " | " << y << " |" << endl;
        if ( y < 0 )
        {
            multiplyResult *= y;
        }
    }
    
    cout << "Произведение отрицательных значений функции: " << multiplyResult << endl;
    
    return 0;
}
