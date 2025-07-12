#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    __int128_t result = 1;
    int count = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (arr[0] != 0)
    {
        
        for (int i = 0; i < n; i++)
        {
          result *= arr[i];

           
        }
        //printf("%lld",)

        if (result == 0)
        {
            break;
        }
        count++;
        if (arr[0] > 0)
        {
            arr[0]--;
        }
        else if (arr[0] < 0)
        {
            arr[0]++;
        }
        else if (arr[0] == 0)
        {
            break;
        }
        result = 1;
    }
    cout << count;

    return 0;
}
