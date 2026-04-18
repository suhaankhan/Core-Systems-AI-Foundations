#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    cout << "Total Sale = $" << sales << endl;

    double stateTaxRate = 0.04;
    double stateTax = sales* stateTaxRate;
    cout << "State Tax = $" << stateTax << endl;

    double countyTaxRate = 0.02;
    double countyTax = countyTaxRate*sales;
    cout << "County Tax = $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << "Total Tax to pay = $" << totalTax << endl;
         
}