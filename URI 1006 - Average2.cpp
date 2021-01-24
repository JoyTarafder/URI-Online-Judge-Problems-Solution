#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  //code

  double a, b, c, x;

  cin >> a >> b >> c ;
  x = ((a*2) + (b*3) + (c*5)) / 10.0;

  cout << "MEDIA = " << fixed << setprecision(1) << x << "\n";

  return 0;
}
