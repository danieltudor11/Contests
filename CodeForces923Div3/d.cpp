#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)

void print_vec(vi v)
{
    rep(i, 0, v.size())
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void solve()
{
    int n, q;
    cin >> n;

    vi v(n);
    int curr, next, reps = 1;
    cin >> curr;
    v[0] = 1;
    rep(i, 1, n)
    {
        cin >> next;
        if (curr == next)
        {
            v[i] = ++reps;
            continue;
        }
        v[i] = 1;
        curr = next;
        reps = 1;
    }

    cin >> q;
    rep(mov, 0, q)
    {
        int x, y;
        cin >> x >> y;
        // we want x to be the larger of the two
        if (x < y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
        if (v[x - 1] > x - y)
        {
            cout << "-1 -1";
        }
        else
        {
            cout << x - v[x - 1] << " " << x;
        }

        cout << endl;
    }

    // // maybe just store pairs with <start, end> where start and end
    // // indicate the edges of sequences of the same number

    // vector<pii> v;
    // int curr, next, startidx=0;
    // cin >> curr;
    // rep(i,1,n){
    //     cin >> next;
    //     if (next != curr){
    //         curr = next;
    //         if (i-startidx > 1){
    //             pii p (startidx, i);
    //             v.pb(p);
    //             startidx = i;
    //         }
    //     }
    // }
    // //now for each query we just need to make sure the indices are
    // // not enclosed by any of those pairs
    // rep(mov,0,q){
    //     int x,y;
    //     cin >> x >> y;
    //     if (x > y){
    //         int temp = x;
    //         x = y;
    //         y = temp;
    //     }
    //     rep(i,0,v.size()){

    //     }
    // }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
        cout << endl;
    }
    return 0;
}