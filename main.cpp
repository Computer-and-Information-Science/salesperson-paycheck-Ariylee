//Ariyle Braswell
//Salesperson Paycheck
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
  string fileName;
  cout << "Enter the input file name ";
  cin >> fileName;

  ifstream inFile(fileName);
  if (!inFile) {
  cerr << "Error opening file." <<endl;
  return 1;
}

string firstName, lastName;
double baseSalary, commissionPercent, totalSales, expenses;

inFile >> firstName >> lastName;
inFile >> baseSalary >> commissionPercent;
inFile >> totalSales;
inFile >> expenses;

inFile.close();

double commission = (commissionPercent / 100.0) * totalSales;
double total = baseSalary + commission - expenses;

cout << "Payroll data for " << firstName << " " << lastName << endl;
cout << fixed << setprecision(2);

cout << "\nBase Salary: " << setw(10) << baseSalary << endl;
cout << "Commission: " << setw(10) << commission << " ( " << setprecision(1) << commissionPercent
     << " % of " << fixed << setprecision(2) << totalSales << " ) " << endl;
cout << "Expenses: " << setw(10) << expenses << endl;
cout << "Total: " << setw(10) << total << endl;

return 0;
}
