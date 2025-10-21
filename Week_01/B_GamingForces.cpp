#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int count_one = 0;      
    int count_more = 0;   


    for (int i = 0; i < n; ++i) {
        int health;
        cin >> health;
        
        if (health == 1) {
            count_one++;
        } else {
            count_more++;
        }
    }

    
    long long total_casts = 0;
    
    total_casts += count_one / 2;
    total_casts += count_one % 2;
    total_casts += count_more;

   
    cout << total_casts << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}