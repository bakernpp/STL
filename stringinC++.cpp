#include<bits/stdc++.h>
#include<cstring>

#define pi 2*cos(0.0)
#define ll long long
#define mxsz 2e5+10

#define ABS(a) (a>0)? a : -(a)
#define MAX(a,b) (a>b)? a : b
#define MIN(a,b) (a<b)? a : b
#define SQ(a) a*a

using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(NULL);

    string s1, s2;
    int len;

    cin >> s1;
    cin >> s2;

    if(s1 == s2) cout << "Equal.\n"; // Check whether two strings are equal or not.

    s1 += s2; // Joining s2 with s1 and assigned to s1

    s1.swap(s2); // Swap s2 into s1

    len = s1.size(); // Length of a string

    cout << s1 << "\nlength: " << len;

    if(s1.empty()) // Check whether string is empty or not
    cout << "\nstring is empty\n";


    s1.erase(3,5); // Start erasing from index 3 to 8

    cout << s1 << "\nlength: \n";



    return 0;
}








