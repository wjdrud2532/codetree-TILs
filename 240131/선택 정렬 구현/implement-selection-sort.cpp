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

    for(int i = 0; i < n - 1; i ++)
    {
        int min = i;

        for(int j = i + 1; j < n; j ++)
        {
            if(arr[j] < arr[min])
                min = j;
        }
        int tempnum = arr[min];
        arr[min] = arr[i];
        arr[i] = tempnum;
    }

    for(int i = 0; i < n; i ++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}