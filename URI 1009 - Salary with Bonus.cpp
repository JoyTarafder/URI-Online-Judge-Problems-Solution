#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  //code

  string a;
  double b, c, x;

  getline(cin, a);

  cin >> b >> c ;
  x = b + ((c*15)/100);

  cout << "TOTAL = R$ "<< fixed << setprecision(2) << x << "\n";

  return 0;
}
//TOTAL = R$
