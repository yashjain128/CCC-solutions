#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, d, s;
    cin >> a >> b >> c >> d >> s;

    int Nikky = (s / (a + b)) * (a - b) + min(a, s % (a + b)) - max(0, (s % (a + b))-a);
    int Byron = (s / (c + d)) * (c - d) + min(c, s % (c + d)) - max(0, (s % (c + d))-c);

    if (Nikky > Byron){
        cout << "Nikky";
    }else if (Byron > Nikky){
        cout << "Byron";
    }else{
        cout << "Tied";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}