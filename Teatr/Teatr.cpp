#include <iostream>
using namespace std;

int main()
{   
    setlocale(LC_ALL, "Russian");
    cout << "Добро пожаловать!" << endl;
    int zacaz, resh=2;
    while (resh != 1) {
        cout << "Сегодня есть три представления, а именно: \"Ромео и Джульета\" - 13:40, \"Реверс\" - 16:50 и \"Ночь ошибок\" - 20:00. \nВсе билеты по 400 р." << endl;
        cout << "Для заказа билета введите порядковый номер представления: ";
        cin >> zacaz;
        if (zacaz == 1) {
            cout << "\nВаш заказ: \"Ромео и Джульета\". \nЕсли вы хотите продолжить, нажмите 1, если же передумали и хотите перезаказать нажмите 2: ";
            cin >> resh;
            while (resh != 1 && resh != 2) {
                cout << "Нет такого варианта ответа. Введите значение 1 или 2: ";
                cin >> resh;
            }
            if (resh == 1) cout << "Спасибо за покупку, ждем вас в театре!";
            else cout << endl;
        }
        else if (zacaz == 2) {
            cout << "\nВаш заказ: \"Реверс\". \nЕсли вы хотите продолжить, нажмите 1, если же передумали и хотите перезаказать нажмите 2: ";
            cin >> resh;
            while (resh != 1 && resh != 2) {
                cout << "Нет такого варианта ответа. Введите значение 1 или 2: ";
                cin >> resh;
            }
            if (resh == 1) cout << "Спасибо за покупку, ждем вас в театре!";
            else cout << endl;
        }
        else if (zacaz == 3) {
            cout << "\nВаш заказ: \"Ночь ошибок\". \nЕсли вы хотите продолжить, нажмите 1, если же передумали и хотите перезаказать нажмите 2: ";
            cin >> resh;
            while (resh != 1 && resh != 2) {
                cout << "Нет такого варианта ответа. Введите значение 1 или 2: ";
                cin >> resh;
            }
            if (resh == 1) cout << "Спасибо за покупку, ждем вас в театре!";
            else cout << endl;
        }
        else cout << "Извините, но такого варианта нет :(\n" << endl;
    }
}

