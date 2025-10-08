
/*
* Напишите программу, которая вычисляет сумму целых 
чисел от а до 500 (значение a вводится с клавиатуры)
* 
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a;
	int sum = 0;
	int tek;
	cout << "Введите целое число а - ";
	cin >> a;
	if (a > 500) {
		cout << "Сумма = 0" << endl;
		return 0;
	}
	tek = a;
	while (tek <= 500) {
		sum = sum + tek;
		tek = tek + 1;

	}
	cout << "Сумма чисел от " << a << "до 500 = " << sum << endl;
	
}
*/

/*
* Напишите программу,которая запрашивает двацелых числа 
x и y, после чего вычисляет и выводитзначение x в степени y.
*

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int x, y;
    int result = 1;  // Начальное значение
    int counter = 0; // подчет

    cout << "Введите целое число x: ";
    cin >> x;

    cout << "Введите целое число y: ";
    cin >> y;

    // отриц степень
    if (y < 0) {
        cout << "Извините, отрицательные степени не поддерживаются в этой программе." << endl;
        return 0;
    }

    // умножаем result на x, y раз
    while (counter < y) {
        result = result * x;
        counter = counter + 1;
    }

    cout << x << " в степени " << y << " = " << result << endl;

    return 0;
}
*/

/*
*  Найти среднее арифметическое всех целых чисел от 1 до 1000
* 
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int summa = 0;          // сумма всех 
    int kolichestvo = 0;    // сколько чисел 
    int chislo = 1;         // текущее число

    //  перебираем числа от 1 до 1000
    while (chislo <= 1000) {
        summa = summa + chislo;      
        kolichestvo = kolichestvo + 1; 
        chislo = chislo + 1;   //переход к след
    }

    // считаем среднеареф. через дабл, так как нужна дробь
    double srednee = static_cast<double>(summa) / kolichestvo;

    // Выводим результат
    cout << "Сумма - " << summa << endl;
    cout << "Кол-во чисел - " << kolichestvo << endl;
    cout << "Среднеарефметическое  - " << srednee << endl;

    return 0;
}

*/
/*
* Найтипроизведениевсехцелыхчиселотaдо20(значение 
a вводится с клавиатуры: 1 <=a <= 20)
* 
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int a;
    int proizvedenie = 1;
    int tek;

    cout << "Введите целое число a (1 <= a <= 20) - ";
    cin >> a;

    if (a < 1 || a > 20) {
        cout << "Ошибка - a должно быть от 1 до 20!" << endl;
        return 0;
    }

    tek = a;

    while (tek <= 20) {
        proizvedenie = proizvedenie * tek;
        tek = tek + 1;
    }

    cout << "Произведение чисел от " << a << " до 20 = " << proizvedenie << endl;

    return 0;
}
*/


#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int k, m = 1, p;

    cout << "Введите номер варианта (k): ";
    cin >> k;

    cout << "Таблица умножения на " << k << ":" << endl;

    while (m <= 10) {
        p = k * m;
        cout << k << " x " << m << " = " << p << ";" << endl;
        m++;
    }

    return 0;
}