#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  vector <int> arr;

    int n,a,b,c,tmp;

    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>tmp;
            arr.push_back(tmp);
        }
    cin>>a;
    cin>>b>>c;

    arr.erase(arr.begin()+a-1);
    arr.erase(arr.begin()+b-1,arr.begin()+c-1);

    cout<<arr.size()<<"\n";
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";

    return 0;
}
