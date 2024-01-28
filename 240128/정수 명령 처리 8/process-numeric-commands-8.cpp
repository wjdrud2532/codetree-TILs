#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    
    int n;
    list<int> s;

    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        string order;
        int value;
        cin >> order;

        if(order == "push_back")
        {
            cin >> value;
            s.push_back(value);
        }
        else if(order == "push_front")
        {
            cin >> value;
            s.push_front(value);
        }
        else if(order == "pop_back")
        {
            cout << s.back() << "\n";
            s.pop_back();
        }

        else if(order == "pop_front")
        {
            cout << s.front() << "\n";
            s.pop_front();
        }

        else if(order == "empty")
        {
            cout << s.empty() << "\n";
        }

        else if(order == "size")
        {
            cout << s.size() << "\n";
        }

        else if(order == "front")
        {
            cout << s.front() << "\n";
        }

        else if(order == "back")
        {
            cout << s.back() << "\n";
        }
    }

    return 0;
}