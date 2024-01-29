#include <iostream>
#include <list>

using namespace std;

int main() {

    int n, m;
    list<char> l;

    cin >> n >> m;
    for(int i = 0; i < n; i ++)
    {
        char tempchar;
        cin >> tempchar;
        l.push_back(tempchar);
    }

    list<char>::iterator it;
    it = l.end();

    for(int i = 0; i < m; i ++)
    {
        char tempchar;
        cin >> tempchar;

        if(tempchar == 'L')
        {
            if(it == l.begin())
                ;
            else
                it --;
        }
        else if(tempchar == 'R')
        {
            if(it == l.end())
                ;
            else
                it ++;
        }
        else if(tempchar == 'D')
        {
            if(it == l.end())
                ;
            else
                it = l.erase(it);
        }
        else if(tempchar == 'P')
        {
            char tempchar_insert;
            cin >> tempchar_insert;

            l.insert(it, tempchar_insert);
       }
 
    }

    for(it = l.begin(); it != l.end(); it ++)
    {
        cout << *it;
    }

    return 0;
}