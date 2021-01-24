#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  //code

  double a, b, x, y;

  cin >> a >> b;
  x = {(a*3.5) + (b*7.5)};
  y = x / 11;

  cout << "MEDIA = " << fixed << setprecision(5) << y << "\n";

  return 0;
}
