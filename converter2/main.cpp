#include "std_lib_facilities.h"

int main()
{
    int currency1 = 0, value = 0, currency2 = 0;
    double rate = 0;

    cout << "Currency Converter Using Switch.   *Market values accurate as of 01/08/2014*\n" << endl;

    do
    {
    cout << "Available Currencies:\n---------------------\n| (1) Euro          |\n"
         << "| (2) Pound         |\n| (3) Dollar        |\n| (4) Yen           |\n| (5) Danish Krone  |"
         << "\n| (6) Chinese Yuan  |\n---------------------\n\n";

    cout << "Currencies are chosen by entering their corresponding index value.\n\n";
    cout << "Please choose a currency: ";
    cin >> currency1;

    switch (currency1)
    {
        case 1:
            cout << "\nYou have selected Euro.\n\n"
                 << "Please choose a value in Euro: ";
            cin >> value;
            cout << "\nYou have chosen " << value << " Euro.\n\n"
                 << "Please choose the currency you wish to convert to: ";
            cin >> currency2;

        switch (currency2)
        {
            case 1:
                cout << "\nYou have chosen Euro.\n\n";
                rate = value * 1;
                cout << value << " Euro == " << rate << " Euro.\n\n\n\n";
                break;
            case 2:
                cout << "\nYou have chosen Pounds.\n\n";
                rate = value * 0.795833;
                cout << value << " Euro == " << rate << " Pounds.\n\n\n\n";
                break;
            case 3:
                cout << "\nYou have chosen Dollars.\n\n";
                rate = value * 1.33943;
                cout << value << " Euro == " << rate << " Dollars.\n\n\n\n";
                break;
            case 4:
                cout << "\nYou have chosen Yen.\n\n";
                rate = value * 137.870;
                cout << value << " Euro == " << rate << " Yen.\n\n\n\n";
                break;
            case 5:
                cout << "\nYou have chosen Danish Krone.\n\n";
                rate = value * 7.45595;
                cout << value << " Euro == " << rate << " Danish Krone.\n\n\n\n";
                break;
            case 6:
                cout << "\nYou have chosen Chinese Yuan.\n\n";
                rate = value * 8.27564;
                cout << value << " Euro == " << rate << " Chinese Yuan.\n\n\n\n";
                break;
        }

        case 2:
            cout << "\nYou have selected Pound.\n\n"
                 << "Please choose a value in Pounds: ";
            cin >> value;
            cout << "\nYou have chosen " << value << " Pounds.\n\n"
                 << "Please choose the currency you wish to convert to: ";
            cin >> currency2;

        switch (currency2)
        {
            case 1:
                cout << "\nYou have chosen Euro.\n\n";
                rate = value * 1.25657;
                cout << value << " Pounds == " << rate << " Euro.\n\n\n\n";
                break;
            case 2:
                cout << "\nYou have chosen Pounds.\n\n";
                rate = value * 1;
                cout << value << " Pounds == " << rate << " Pounds.\n\n\n\n";
                break;
            case 3:
                cout << "\nYou have chosen Dollars.\n\n";
                rate = value * 1.68296;
                cout << value << " Pounds == " << rate << " Dollars.\n\n\n\n";
                break;
            case 4:
                cout << "\nYou have chosen Yen.\n\n";
                rate = value * 173.261;
                cout << value << " Pounds == " << rate << " Yen.\n\n\n\n";
                break;
            case 5:
                cout << "\nYou have chosen Danish Krone.\n\n";
                rate = value * 9.36864;
                cout << value << " Pounds == " << rate << " Danish Krone.\n\n\n\n";
                break;
            case 6:
                cout << "\nYou have chosen Chinese Yuan.\n\n";
                rate = value * 10.4010;
                cout << value << " Pounds == " << rate << " Chinese Yuan.\n\n\n\n";
                break;
        }
    }

    }while(1 > 0);



    return 0;
}
