#include <iostream>

using namespace std;

int main() {

    int n;
    int arr[101] = {0, };
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        cin >> arr[i];
    }

    for(int i = 1; i < n; i ++)
    {
        
        int j = i - 1;
        int tempnum = arr[i];

        while(j >= 0 && arr[j] > tempnum)
        {
            arr[j + 1] = arr[j];
            j --;
        }
        arr[j + 1] = tempnum;
    }
    
    for(int i = 0; i < n; i ++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}