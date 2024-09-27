#include <iostream>

int main()
{

    setlocale(LC_ALL, "rus");//руссификатор
    using namespace std;

    int CHOICE;
    cout << "какое задание хотите проверить\n";
    cin >> CHOICE;

    if (CHOICE == 1)
    {
        //переменные
        int nuts;
        int squirrels;
        int leftovers;
        //ввод переменных
        cout << "введите количество орехов\n";
        cin >> nuts;
        cout << "введите количество белок\n";
        cin >> squirrels;
        //решение
        leftovers = nuts % squirrels;
        cout << leftovers;
        
    }
    else if (CHOICE == 2)
    {
        //переменные
        int H1, M1, S1;
        int H2, M2, S2;
        //ввод переменных
        cout << "Введите первый момент времени (часы минуты секунды):"<<endl;
        cin >> H1 >> M1 >> S1;
        cout << "Введите второй момент времени (часы минуты секунды): "<<endl;
        cin >> H2 >> M2 >> S2;
        //решение
        int Seconds1 = H1 * 3600 + M1 * 60 + S1;
        int Seconds2 = H2 * 3600 + M2 * 60 + S2;
        int Difference = Seconds2 - Seconds1;
        cout << "Разность времени между двумя моментами: " << Difference << " секунд." ;

    }
    else
        cout << "введите заново";

    return 0;


}
