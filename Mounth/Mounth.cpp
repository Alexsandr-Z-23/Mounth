#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int num_of_days, dn, month, count = 0;
    bool marker = false, reset = false;
    cout << "Введите номер месяца ";
    cin >> month;
    cout << "Введите номер дня недели для начала месяца ";
    cin >> dn;
    if (month == 1  ||month == 3  ||month == 5 || month == 7||  month == 8|| month == 10||  month == 12)
        num_of_days = 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        num_of_days = 30;
    else if (month == 2)
        num_of_days = 28;
    else
        cout << "Некорректный номер месяца";
    /*switch (month)
    {
    case 1:
     num_of_days = 31;
     break;
    case 2:
     num_of_days = 28;
     break;
    case 3:
     num_of_days = 31;
     break;
    case 4:
     num_of_days = 30;
     break;
    case 5:
     num_of_days = 31;
     break;
    case 6:
     num_of_days = 30;
     break;
    case 7:
     num_of_days = 31;
     break;
    case 8:
     num_of_days = 31;
     break;
    case 9:
     num_of_days = 30;
     break;
    case 10:
     num_of_days = 31;
     break;
    case 11:
     num_of_days = 30;
     break;
    case 12:
     num_of_days = 31;
     break;
    }
    */
    cout << "\t\t\tМесяц номер " << month << endl;
    cout << "\tПн\tВт\tСр\tЧт\tПт\tСб\tВс\n";
    int a = 0;
    while (true)
    {
        cout << "\t";
        for (int i = 1; i <= 7; i++)
        {
            if (i == dn)
                marker = true;
            if (marker)
            {
                count++;
                cout << count << "\t";
                if (count == num_of_days)
                {
                    reset = true;
                    break;
                }
            }
            else
                cout << "\t";

        }
        cout << "\n";
        if (reset)
            break;
    }
    //cout << count << "\t" << num_of_days;
    return 0;
}
