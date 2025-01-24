#include <iostream>
#include <string>
using namespace std;

int main() {
  double price;
  string message;

  cout << "Введите цену за символ" << endl;
  cin >> price;

  cout << "Введите текст" << endl;
  getline (cin, message);

  price = message.size() * price;

  cout << "Цена телеграммы - " << price;
}