#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    if(b==0){
        cout << "Error: division by zero" << endl;
    }else{
        cout <<(double)a/b << endl;
    }

    return 0;
}