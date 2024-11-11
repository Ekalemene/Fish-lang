
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

// Функция для проверки на наличие плохих слов
bool containsBadWords(const string& text) {
    string badWords[] = {"fuck", "shit", "bitch", "asshole", "damn", "hell", "cunt",
                         "áëÿ", "ñóêà", "ïèçäåö", "åáàòü", "õóé", "æîïà", "ãîâíî"};

    for (const string& badWord : badWords) {
        if (text.find(badWord) != string::npos) {
            return true;
        }
    }
    return false;
}

// Функция для вычисления факториала
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Функция для нахождения максимума
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Функция для нахождения минимума
int findMin(int a, int b) {
    return (a < b) ? a : b;
}

// Функция для вычисления суммы элементов массива
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    cout << "Welcome to Fish" << endl;
    cout << "By SmolCutiePie" << endl;
    cout << "Copyright (c) 2024 FishLang . All Rights Reserved." << endl;

    string a = "/aloittaa";
    cin >> a;

    if (a == "/aloittaa") {
        cout << "" << endl;
    } else {
        cout << "Syntax Error!" << endl;
        return 0;
    }

    while (true) {
        string b = "";
        cin >> b;

        transform(b.begin(), b.end(), b.begin(), ::tolower);

        if (containsBadWords(b)) {
            cout << "Be kinder =( Try again!" << endl;
        } else if (b == "!plus:") { // сложение
            cout << "";
            int c, d;
            cin >> c >> d;
            cout << c + d << endl;
        } else if (b == "!minus:") { // вычитание
            cout << "";
            int c, d;
            cin >> c >> d;
            cout << c - d << endl;
        } else if (b == "!mp:") { // умножение
            cout << "";
            int c, d;
            cin >> c >> d;
            cout << c * d << endl;
        } else if (b == "!dn:") { // деление
            cout << "";
            int c, d;
            cin >> c >> d;
            if (d != 0) {
                cout << c / d << endl;
            } else {
                cout << "I cant( Division on Zero!" << endl;
            }
        } else if (b == "!max:") { // нахождение максимума
            cout << "";
            int c, d;
            cin >> c >> d;
            cout << "Max: " << findMax(c, d) << endl;
        } else if (b == "!min:") { // нахождение минимума
            cout << "";
            int c, d;
            cin >> c >> d;
            cout << "Min: " << findMin(c, d) << endl;
        } else if (b == "!sum:") { // сумма элементов массива
            cout << "";
            int size;
            cout << "Enter size of array: ";
            cin >> size;
            int* arr = new int[size];
            cout << "Enter elements of array: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            cout << "Sum: " << sumArray(arr, size) << endl;
            delete[] arr; // освобождение памяти
        } else if (b == "?NL?") { // ShowSenTence
            cout << "";
            int e;
            cin >> e;
            cout << e << endl;
        } else if (b == "!ftrl:") { // Ôàêòîðèàë
      cout << "";
      int n;
      cin >> n;
      if (n >= 0) {
        cout << "Factorial of " << n << ": " << factorial(n) << endl;
      } else {
        cout << "Error: Factorial is not defined for negative numbers!" << endl;
      }
    } else if (b == "!sqrt:") { // Êâàäðàòíûé êîðåíü
      cout << "";
      double x;
      cin >> x;
      if (x >= 0) {
        cout << "Square root of " << x << ": " << sqrt(x) << endl;
      } else {
        cout << "Error: Square root is not defined for negative numbers!" << endl;
      }
    } else if (b == "!pow:") { // Âîçâåäåíèå â ñòåïåíü
      cout << "";
      double base, exponent;
      cin >> base >> exponent;
      cout << base << " raised to the power of " << exponent << ": " << pow(base, exponent) << endl;
    } else if (b == "!exit") {
      cout << "Bye user! :] " << endl;
      break;
    } else {
      cout << "Syntax Error!" << endl;
    }
  }

  return 0;
}
    