#include<bits/stdc++.h>
double EPS = 1e-9;// need for error
double PI = acos(-1);
typedef long long ll;
//typedef vector<int> vi;
//typedef pair<int, int> pii;
#define F first
#define S second
#define PB push_back
#define MP maker_pair
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define MAX(a, b) a > b
#define MIN(a,b) a < b
#define SQ(x) x * x
#define RESET(a,b) memset(a, b, sizeof(a))




using  namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // map with character
    map<char,int>mp;
    mp['a']=2;
    mp['b']=4;
    mp['d']=2;
    mp['c']=6;
    for(auto it : mp){
        cout << it.first << " " << it.second <<endl;
    }

    // map with integers
    cout << "Map with integers...\n";
    map<int,int>mpi;
    mpi.insert({1,3});
    mpi.insert({3,5});
    mpi.insert({5,7});
    mpi.insert({6,6});
    for(auto it : mpi){
        cout << it.first << " " << it.second <<endl;
    }



    // set example
    cout << " Set example for integers.......\n";
    set<int>s;
    unordered_set<int>us;
    s.insert(3);
    s.insert(4);
    s.insert(6);
    s.insert(1);
    us.insert(3);
    us.insert(4);
    us.insert(6);
    us.insert(1);
    cout << "Ordered set\n";
    for(auto it : s){
        cout << it << '\n';
    }
    cout << "UnOrdered set\n";
    for(auto it : us){
        cout << it << '\n';
     }
    return 0;
}


