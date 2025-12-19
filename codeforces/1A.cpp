#include <iostream>

using namespace std;

int main() {

        long long int n,m,a;
        cin>>n>>m>>a;

        long long int x = n / a;
        if (n % a != 0) x++;

        long long int y = m / a;
        if (m % a != 0) y++;

        cout<<x*y<<endl;

    return 0;
}
