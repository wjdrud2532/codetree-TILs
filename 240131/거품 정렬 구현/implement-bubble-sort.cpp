#include <iostream>

using namespace std;

int main() {
    
    int n;
    int arr[101] = {0, };
    bool sorted = false;

    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        cin >> arr[i];
    }

    while(sorted == false)
    {
        sorted = true;
        for(int i = 0; i < n - 1; i ++)
        {
            for(int j = i; j < n; j++)
            {
                if(arr[i] > arr[j])
                {
                    int tempnum = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tempnum;
                    sorted = false;
                }
            }
        }
    }
    
    for(int i = 0; i < n; i ++)
    {
        cout << arr[i] << " ";
    }
    


    return 0;
}