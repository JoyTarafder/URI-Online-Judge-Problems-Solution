#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  //code
  long long a1, b1, a2, b2;
  double  c1, c2 ,x;


  cin >> a1 >> b1 >> c1 ;
  cin >> a2 >> b2 >> c2 ;

  x = (b1*c1) + (b2*c2);


  cout << "VALOR A PAGAR: R$ "<< fixed << setprecision(2) << x << "\n";

  return 0;
}
