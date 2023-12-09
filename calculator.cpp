#include <iostream>

using namespace std;

int main(){
    float fnum, lnum, plus, minus, division, multiplication;
    int optor;
    cout << "first number: ";
    cin >> fnum ;
    cout << "operator\( 1-plus 2-minus 3-multiplication 4-division \): ";
    cin >> optor ;
    cout << "last number: ";
    cin >> lnum;
    switch (optor) {
        case 1:
            plus = fnum + fnum;
            cout << fnum << " + " << lnum << " = " << plus << "\n";
            break;
        case 2:
            minus = fnum - lnum;
            cout << fnum << " - " << lnum << " = " << minus << "\n";
            break;
        case 3:
            multiplication = fnum * lnum;
            cout << fnum << " * " << lnum << " = " << multiplication << "\n";
            break;
        case 4:
            division = fnum / lnum;
            cout << fnum << " / " << lnum << " = " << division << "\n";
            break;
        default:
            cout << "Error: This operator is not found!" << "\n";
            break;
    }
    return 0;
}
