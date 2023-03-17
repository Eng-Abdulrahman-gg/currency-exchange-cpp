#include <iostream>

using namespace std;

int main()
{
    int currency1 = 0, value = 0, currency2 = 0;
    double rate = 0;

    cout << "Currency Converter .   *Market values accurate as of 12/12/2019*\n" << endl;

    do
    {
    cout << "Available Currencies:\n---------------------\n| (1) Egypt pound|\n"
         << "| (2) British pound         |\n| (3) Dollar        |\n|  (4) UAE Dirham   |"
         << "\n| (5) Japanese Yuan  | \n| (6) Turkish Lira          |\n" "|         \n\n---------------------\n\n";

    cout << "Currencies are chosen by entering their corresponding index value.\n\n";
    cout << "Please choose a currency: ";
    cin >> currency1;

    switch (currency1)
    {
        case 1:
            cout << "\nYou have selected Egypt Pound.\n\n"
                 << "Please choose a value in Egypt Pound: ";
            cin >> value;
            cout << "\nYou have inter the value in Egypt Pound.\n\n"
                 ;

            cout << "\nYou have chosen " << value << " pound.\n\n"
                 << "Please choose the currency you wish to convert to: ";
            cin >> currency2;

         switch (currency2)
         {

            case 1:
                cout << "\nYou have chosen Egypt Pound.\n\n";
                rate = value * 1;
                cout << value << " pound == " << rate << " Egypt Pound.\n\n\n\n";
                break;

            case 2:
                cout << "\nYou have chosen British pound.\n\n";
                rate = value * 0.047;
                cout << value << " pound == " << rate << " British pound.\n\n\n\n";
                break;
            case 3:
                cout << "\nYou have chosen Dollars.\n\n";
                rate = value * 0.062;
                cout << value << " pound == " << rate << " Dollars.\n\n\n\n";
                break;
            case 4:
                cout << "\nYou have UAE Dirham.\n\n";
                rate = value * 0.23;
                cout << value << " pound == " << rate << " Dirham.\n\n\n\n";
                break;
            case 5:
                cout << "\nYou have chosen Japanese Yuan.\n\n";
                rate = value * 6.72;
                cout << value << " pound == " << rate << " Japanese Yuan.\n\n\n\n";
                break;
                   case 6:
                cout << "\nYou have chosen Turkish Lira.\n\n";
                rate = value * 0.36;
                cout << value << " pound == " << rate << " Turkish Lira.\n\n\n\n";
                break;
               }
break;
case 2:
            cout << "\nYou have selected British pound.\n\n"
                 << "Please choose a value in Pounds: ";
            cin >> value;
            cout << "\nYou have chosen " << value << " Pounds.\n\n"
                 << "Please choose the currency you wish to convert to: ";
            cin >> currency2;

        switch (currency2)
        {
             case 1:
                cout << "\nYou have chosen Egypt Pound.\n\n";
                rate = value *21.25;
                cout << value << " pound == " << rate << " Egypt Pound.\n\n\n\n";
                break;

            case 2:
                cout << "\nYou have chosen British pound.\n\n";
                rate = value * 1;
                cout << value << " pound == " << rate << " British pound.\n\n\n\n";
                break;
            case 3:
                cout << "\nYou have chosen Dollars.\n\n";
                rate = value * 1.31;
                cout << value << " pound == " << rate << " Dollars.\n\n\n\n";
                break;
            case 4:
                cout << "\nYou have UAE Dirham.\n\n";
                rate = value * 4.83;
                cout << value << " pound == " << rate << " Dirham.\n\n\n\n";
                break;
            case 5:
                cout << "\nYou have chosen Japanese Yuan.\n\n";
                rate = value * 142.70;
                cout << value << " pound == " << rate << " Japanese Yuan.\n\n\n\n";
                break;
                   case 6:
                cout << "\nYou have chosen Turkish Lira.\n\n";
                rate = value * 7.60;
                cout << value << " pound == " << rate << " Turkish Lira.\n\n\n\n";
                break;
                   }
break;
case 3:
            cout << "\nYou have selected Dollars.\n\n"
                 << "Please choose a value in Dollars: ";
            cin >> value;
            cout << "\nYou have chosen " << value << " Dollars.\n\n"
                 << "Please choose the currency you wish to convert to: ";
            cin >> currency2;

        switch (currency2)
        {
             case 1:
                cout << "\nYou have chosen Egypt Pound.\n\n";
                rate = value *16.17;
                cout << value << " Dollars == " << rate << " Egypt Pound.\n\n\n\n";
                break;

            case 2:
                cout << "\nYou have chosen British pound.\n\n";
                rate = value /1.31;
                cout << value << " Dollars == " << rate << " British pound.\n\n\n\n";
                break;
            case 3:
                cout << "\nYou have chosen Dollars.\n\n";
                rate = value * 1;
                cout << value << " Dollars == " << rate << " Dollars.\n\n\n\n";
                break;
            case 4:
                cout << "\nYou have UAE Dirham.\n\n";
                rate = value * 3.67;
                cout << value << " Dollars == " << rate << " Dirham.\n\n\n\n";
                break;
            case 5:
                cout << "\nYou have chosen Japanese Yuan.\n\n";
                rate = value * 108.58;
                cout << value << " Dollars == " << rate << " Japanese Yuan.\n\n\n\n";
                break;
                   case 6:
                cout << "\nYou have chosen Turkish Lira.\n\n";
                rate = value * 5.78;
                cout << value << " Dollars == " << rate << " Turkish Lira.\n\n\n\n";
                break;
                 }
break;
case 4:
            cout << "\nYou have selected UAE Dirham.\n\n"
                 << "Please choose a value in Dirham: ";
            cin >> value;
            cout << "\nYou have chosen " << value << " Dirham.\n\n"
                 << "Please choose the currency you wish to convert to: ";
            cin >> currency2;

        switch (currency2)
        {
             case 1:
                cout << "\nYou have chosen Egypt Pound.\n\n";
                rate = value *4.39;
                cout << value << " Dirham == " << rate << " Egypt Pound.\n\n\n\n";
                break;

            case 2:
                cout << "\nYou have chosen British pound.\n\n";
                rate = value /142.70;
                cout << value << " Dirham == " << rate << " British pound.\n\n\n\n";
                break;
            case 3:
                cout << "\nYou have chosen Dollars.\n\n";
                rate = value /3.67;
                cout << value << " Dirham == " << rate << " Dollars.\n\n\n\n";
                break;
            case 4:
                cout << "\nYou have UAE Dirham.\n\n";
                rate = value * 1;
                cout << value << " Dirham == " << rate << " Dirham.\n\n\n\n";
                break;
            case 5:
                cout << "\nYou have chosen Japanese Yuan.\n\n";
                rate = value * 29.56;
                cout << value << " Dirham == " << rate << " Japanese Yuan.\n\n\n\n";
                break;
                   case 6:
                cout << "\nYou have chosen Turkish Lira.\n\n";
                rate = value * 1.57;
                cout << value << " Dirham == " << rate << " Turkish Lira.\n\n\n\n";
                break;
                }
break;
case 5:
            cout << "\nYou have selected Japanese Yuan.\n\n"
                 << "Please choose a value in Yuan: ";
            cin >> value;
            cout << "\nYou have chosen " << value << " Yuan.\n\n"
                 << "Please choose the currency you wish to convert to: ";
            cin >> currency2;

        switch (currency2)
        {
             case 1:
                cout << "\nYou have chosen Egypt Pound.\n\n";
                rate = value /6.72;
                cout << value << " Yuan == " << rate << " Egypt Pound.\n\n\n\n";
                break;

            case 2:
                cout << "\nYou have chosen British pound.\n\n";
                rate = value /1.31;
                cout << value << " Yuan == " << rate << " British pound.\n\n\n\n";
                break;
            case 3:
                cout << "\nYou have chosen Dollars.\n\n";
                rate = value /108.58;
                cout << value << " Yuan == " << rate << " Dollars.\n\n\n\n";
                break;
            case 4:
                cout << "\nYou have UAE Dirham.\n\n";
                rate = value /29.56;
                cout << value << " Yuan == " << rate << " Dirham.\n\n\n\n";
                break;
            case 5:
                cout << "\nYou have chosen Japanese Yuan.\n\n";
                rate = value * 1;
                cout << value << " Yuan == " << rate << " Japanese Yuan.\n\n\n\n";
                break;
                   case 6:
                cout << "\nYou have chosen Turkish Lira.\n\n";
                rate = value * 0.053;
                cout << value << " Yuan == " << rate << " Turkish Lira.\n\n\n\n";
                break;
                }
                break;
 case 6:
            cout << "\nYou have selected Turkish Lira.\n\n"
                 << "Please choose a value in Lira: ";
            cin >> value;
            cout << "\nYou have chosen " << value << " Lira.\n\n"
                 << "Please choose the currency you wish to convert to: ";
            cin >> currency2;

        switch (currency2)
        {
             case 1:
                cout << "\nYou have chosen Egypt Pound.\n\n";
                rate = value *2.79;
                cout << value << " Lira == " << rate << " Egypt Pound.\n\n\n\n";
                break;

            case 2:
                cout << "\nYou have chosen British pound.\n\n";
                rate = value *0.13;
                cout << value << " Lira == " << rate << " British pound.\n\n\n\n";
                break;
            case 3:
                cout << "\nYou have chosen Dollars.\n\n";
                rate = value *0.17;
                cout << value << " Lira == " << rate << " Dollars.\n\n\n\n";
                break;
            case 4:
                cout << "\nYou have UAE Dirham.\n\n";
                rate = value *0.64;
                cout << value << " Lira == " << rate << " Dirham.\n\n\n\n";
                break;
            case 5:
                cout << "\nYou have chosen Japanese Yuan.\n\n";
                rate = value *18.79;
                cout << value << " Lira == " << rate << " Japanese Yuan.\n\n\n\n";
                break;
                   case 6:
                cout << "\nYou have chosen Turkish Lira.\n\n";
                rate = value * 1;
                cout << value << " Lira == " << rate << " Turkish Lira.\n\n\n\n";
                break;
        }
    }
    }while(1 > 0);
    return 0;
}
