#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  //code

  int a, b;
  float c , x;

  cin >> a >> b >> c ;
  x = b*c;

  cout << "NUMBER = " << a << "\n" << "SALARY = U$ "<< fixed << setprecision(2) << x << "\n";

  return 0;
}
//NUMBER = 25
//SALARY = U$ 550.00
/*Write a program that reads an employee's number,
his/her worked hours number in a month and the amount he received per hour.
Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.*/
