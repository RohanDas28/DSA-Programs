#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  int m{};
  int n{};
 cin >> m;
  n = m;
  int a[m + 2][n + 2];
  for (int i = 0; i <= n + 1; i++) {
    for (int j = 0; j <= n + 1; j++) {
      a[i][j] = 0;
    }
  }
  int temp{1};
  int i{1};
  int j{int((n+2)/2)};
  a[0][0] = -1;
  a[0][n + 1] = -1;
  a[n + 1][0] = -1;
  a[n + 1][n + 1] = -1;
  a[1][int((n + 2) / 2)] = 1;
  temp++;
  while (temp <= n * n) {
    i--;
    j++;
    if (a[i][j] == -1) {
        i+=2;
        j-=1;
      a[i][j] = temp;
    } 
    else if (a[i][j] == 0) {
      if (i ==0) {
        i = n;
        a[i][j] = temp;       
      }
      else if(j>n){
        j=1;
        a[i][j]=temp;
      }
      a[i][j]=temp;
    } else {
      i+=2;
      j--;
      a[i][j] = temp;
    }
    temp++;
  }
  cout<<endl;
  for (int i = 1; i <=n; i++) {
    for (int j = 1; j <=n; j++) {
      cout << setw(3) << a[i][j];
    }
    cout << endl;
  }

  return 0;
}
