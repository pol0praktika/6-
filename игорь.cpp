#include <iostream>
#include <ctime>

using namespace std;
//12 вариант

void randommas(int* arr, int size) {
	for (int i = 0;i < size;i++) {
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(0));

	//задание 1
	cout << "1:" << endl;
	int* a1;
	int i, size;

	cout << endl << "введите размер массива: ";
	cin >> size;
	a1 = new int[size];

	cout << "Массив:" << endl;
	randommas(a1, size);//заполнение массива

    int maxc=1, n=-1;
    //перебираем все элементы массива
    for (i = 0; i < size; i++)
    {
        int c = 0; //счетчик
        for (int j = i; j < size; j++) {

            if (a1[i] == a1[j]) {
                c++;
            }

        }
  
        if (maxc < c)
        {
            maxc = c;
            n = i;
        }
    }
   
    if (n > -1) {
        cout << "Число, которое встречается чаще всего: " << endl << a1[n] << endl;
    }
    else {
        cout << endl << "Нет повторяющихся чисел" << endl << endl;
    }
    cout << endl;
    delete[] a1;

    //2 задание
    cout << "2:" << endl;

    int* a2;

    cout << endl << "введите размер массива: ";
    cin >> size;
    a2 = new int[size];

    cout << "Массив:" << endl;
    randommas(a2, size);
    
    int min = 0;
    int max = a2[size-1];
    for (int i = 0; i < size; i++) {
        if (a2[i] < a2[min]) { 
            min = i; 
        }
        if (a2[i] > a2[max]) {
            max = i;
        }
    }
    cout << "min = " << a2[min] << endl;
    cout << "max = " << a2[max] << endl;

    //меняю местами max и min
    int b = a2[max];
    a2[max] = a2[min];
    a2[min] = b;

    cout << "новый массив:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a2[i] << " ";
    }
    cout << endl << endl;

    delete[] a2;

    //3 задание
    //cout << "3:" << endl;



    //cout << endl;
  
    //4 задание
    int* a4;
    cout << "4:" << endl;
    cout << endl << "введите размер массива: ";
    cin >> size;
    a4 = new int[size];

    cout << "Массив:" << endl;
    randommas(a4, size);
    int sum=0;
    i = 0;
    int c = 0;
    while (i < size) {
        if (a4[i] % 2 == 0)
        {
            c = i;
            break;
        }
        i++;
    }

    if (c == 0) {
        cout << "В массиве нет четных чисел" << endl;
        for (i = 1;i < size - 1;i++) {
            sum += a4[i];
        }
        cout << "сумма всех чисел, кроме крайних: " << sum;
    }
    else {
        for (int j = 0;j < c;j++) {
            sum += a4[j];
        }
        cout << "сумма всех чисел до 1 четного: " << sum;
    }
    cout << endl << endl;

    delete[] a4;



    //5 задание
    int* a5;
    cout << "5:" << endl;
    cout << endl << "введите размер массива: ";
    cin >> size;
    a5 = new int[size];

    cout << "Массив:" << endl;
    randommas(a5, size);

    int K;
    cout << "Введите число: " << endl;
    cin >> K;
    int srsum = 0;//среднее арифметическое
    sum = 0;
    for (i = 0;i < size;i++) {
        sum += a5[i];
    }
    srsum = sum / size;

    cout << "Среднее арифметическое: " << srsum << endl;

    for (i = 0;i < size;i++) {
        if (K < a5[i]) {
            a5[i] = srsum;
        }
    }

    cout << "Массив:" << endl;
    for (int i = 0;i < size;i++) {
        cout << a5[i] << " ";
    }

    cout << endl << endl;

    delete[] a5;


    //6 задание
    int* a6;
    cout << "6:" << endl;
    cout << endl << "введите размер массива: ";
    cin >> size;
    a6 = new int[size];

    cout << "Массив:" << endl;
    randommas(a6, size);

    cout << "Введите число: " << endl;
    cin >> K;
    sum = 0;
    for (i = 0; i < size; i++)
    {
        if (a6[i] % K == 0) {
            sum += a6[i];
        }
    }
    cout << "Сумма чисел кратных K: " << sum;

    cout << endl << endl;

    delete[] a6;
}
