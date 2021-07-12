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

void SwapVector( vector < int > &V ){ // This function changes the values of vector V

    V[0] = 234;
    cout << "SwapVector Function = "  ;
    cout << V[0] << '\n';

}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(NULL);

    vector < int > V;

    V.push_back(3); // Insert elements at the end of the vector
    V.push_back(5);
    V.push_back(6);
    V.push_back(4);
    V.push_back(1);
    V.push_back(22);
    V.push_back(24);
    V.push_back(26);
    V.push_back(27);
    V.push_back(28);
    V.push_back(29);


    sort(V.begin(), V.end()); // Sort a vector in ascending order
    sort(V.begin(), V.end(), greater<int>()) // Sort a vector in descending order;

    vector < int > P = V; // Swapping a vector to another

    V.pop_back(); // Delete element from the end of the vector

    for (int i = 0; i < V.size(); i++) // Accessing the elements of the vector
        cout << V[i] << " ";

    cout << '\n';
    for (int i = 0; i < P.size(); i++) // Accessing the elements of the vector
        cout << P[i] << " ";


    V.resize(5); // Resize the vector with the size of 5

    cout << '\n';
    V.erase(V.begin()+2); // Erasing the element which position is 2


    SwapVector(V);


    for (int i = 0; i < V.size(); i++) // Accessing the elements of the vector
        cout << V[i] << " ";

    V.clear(); // Erase the all elements of the vector

    if(V.empty()) cout << "\nVector is empty.\n";


    return 0;
}









