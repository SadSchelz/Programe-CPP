#include <iostream>

using namespace std;

bool fake(int x) {
    bool ceva = false;
    while (x>0) {
        int cif = x % 10;
        if (cif%2==0) ceva = true;
        else ceva = false;
        x /= 10;
    }
    return ceva;
}

int main()
{
    int a[10][10], i, j, n;
    cin >> n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            cin >> a[i][j];
            
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(fake(a[i][j])) cout << a[i][j] << " nr pare\n";
            else cout << a[i][j] << " nr impar\n";
            
    return 0;
}
