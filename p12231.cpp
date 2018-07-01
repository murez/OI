#include <cstdio>
#include <iostream> 
#include <algorithm>
#include <iomanip> 
using namespace std;
int main()
{
    int n;
    double sum = 0; 
    cin >> n; 
    pair<int, int>*a = new pair<int, int>[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a,a+n);
    for (int i = 1; i <=n; ++i)
    {
        sum += a[i].first * (n - i);                                
        cout << a[i].second << ' ';
    }
    cout<<endl<<setiosflags(ios::fixed)<<setprecision(2)<<sum/n<<endl;
    delete[] a;
    return 0; 
}
