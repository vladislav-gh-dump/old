#include <iostream>
#include <string>

using namespace std;

int main() {

  // Объявление типа и задание данных
  int i, j, numTankers = 5, numMonths = 4;
  string months[4] = {"May", "June", "July", "August"};
  string tankers[5] = {"Tankep-1", "Tankep-2", "Tankep-3", "Tankep-4",
                       "Tankep-5"};
  int a[5][4] = {102, 99,  108, 103, 98, 100, 90, 93,  101, 103,
                 95,  105, 100, 102, 99, 104, 97, 106, 107, 98};

  // заголовок таблицы
  cout << "Tankers ";
  for (i = 0; i < numMonths; i++) {
    cout << "  " << months[i] << " ";
  }
  cout << "\t| Over Plan" << endl;

  int numOverPlan = 0;
  // данные таблицы
  for (i = 0; i < numTankers; i++) {
    // танкер - строка
    cout << tankers[i];

    for (j = 0; j < numMonths; j++) {
      // месяц - столбец

      cout << "   " << a[i][j] << " ";
      if (a[i][j] > 100){
        numOverPlan++;
      }
    }
    cout << "   \t| " << numOverPlan;
    cout << endl;
    numOverPlan = 0;
  }

  return 0;
}