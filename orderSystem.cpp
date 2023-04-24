/*

Order System (Project Exercise)

*/
#include <iostream>

using namespace std;

int main(){

    int menuCH,breadCH,fruitCH;
    double payment,total = 0;

    cout << "======================== Restaurant ========================" << endl << endl;
    while(true){
    cout << "Product List: " << endl;
    cout << "[1] Bread/Grains" << endl;
    cout << "[2] Breakfast" << endl;
    cout << "[3] Fruits" << endl;
    cout << "[4] Check total" << endl;
    cout << "[5] Check out" << endl;
    cout << "[6] Exit" << endl << endl;
    cout << "Choice: ";

    cin >> menuCH;

    cout << endl;

    switch(menuCH){
        case 1:
            cout << "Bread/Grains:" << endl;
            cout << "[1] Bread\t\t 10.50$" << endl;
            cout << "[2] Bagel\t\t 11.23$" << endl;
            cout << "[3] Pasta\t\t 12.25$" << endl << endl;
            cout << "Choice: ";
            cin >> breadCH;

            cout << endl;

            switch (breadCH) {
                case 1:
                    total += 10.50;
                    break;
                case 2:
                    total += 11.23;
                    break;
                case 3:
                    total += 12.25;
                    break;
                default:
                    cout << "Invalid Choice!" << endl << endl;
                    break;
            }
            break;
        case 2:
            cout << "Breakfast:" << endl;
            cout << "[1] Cereal\t\t 5.70$" << endl;
            cout << "[2] Oatmeal\t\t 4.93$" << endl;
            cout << "[3] Baking Mix\t\t 3.15$" << endl << endl;
            cout << "Choice: ";
            cin >> breadCH;

            cout << endl;

            switch (breadCH) {
                case 1:
                    total += 5.70;
                    break;
                case 2:
                    total += 4.93;
                    break;
                case 3:
                    total += 3.15;
                    break;
                default:
                    cout << "Invalid Choice!" << endl << endl;
                    break;
            }
            break;
        case 3:
            cout << "Fruits:" << endl;
            cout << "[1] Apple\t\t 1.21$" << endl;
            cout << "[2] Orange\t\t 1.05$" << endl;
            cout << "[3] Grapes\t\t 2.56$" << endl << endl;
            cout << "Choice: ";
            cin >> fruitCH;

            cout << endl;

            switch(fruitCH){
            case 1:
                total += 1.21;
                break;
            case 2:
                total += 1.05;
                break;
            case 3:
                total += 2.56;
                break;
            default:
                cout << "Invalid Choice!" << endl << endl;
                break;
            }
            break;
        case 4:
            cout << "Total: " << total << endl << endl;
            break;
        case 5:
            cout << "Total: " << total << endl;
            while(true){
                cout << "Payment: ";
                cin >> payment;
                if(payment >= total){
                    cout << "Change: " << payment - total << endl << endl;
                    break;
                }
                else{
                    cout << "Payment must be higher or equal to amount!" << endl;
                    //(loop it ask the user again)
                }
            }
            break;
        case 6:
             return 0;
        default:
        cout << "Invalid choice!" << endl << endl;
        break;

    }
    }

    return 0;
}
