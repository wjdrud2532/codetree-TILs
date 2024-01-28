#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    int n;
    vector<int> v;
    cin >> n;

    for(int i = 0; i < n; i ++)
    {
        string tempstr;
        int tempnum;
        cin >> tempstr;

        if(tempstr == "push_back")
        {
            cin >> tempnum;
            v.push_back(tempnum);
        }
        else if(tempstr == "pop_back")
        {
            v.pop_back();
        }
        else if(tempstr == "get")
        {
            cin >> tempnum;
            cout << v[tempnum - 1] << "\n";;
        }
        else
        {
            cout << v.size() << "\n";
        }
    }

    return 0;
}