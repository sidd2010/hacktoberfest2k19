#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool lol = true;
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int count[3] = {1, 0, 0};

        if (arr[0] != 5)
        {
            cout << "NO" << endl;
            lol = false;
            continue;
        }

        for (int i = 1; i < n; i++)
        {
            if (arr[i] == 5)
                count[0]++;

            else if (arr[i] == 10)
            {
                count[1]++;
                if (count[0] > 0)
                {
                    count[0]--;
                }
                else
                {
                    cout << "NO" << endl;
                    lol = false;
                    break;
                }
            }

            else
            {
                count[2]++;
                if (count[1] > 0)
                {
                    count[1]--;
                }
                else
                {
                    if (count[0] >= 2)
                    {
                        count[0] -= 2;
                    }
                    else
                    {
                        cout << "NO" << endl;
                        lol = false;
                        break;
                    }
                }
            }
        }
        if (lol == true)
            cout << "YES" << endl;
        // cout << count[0] << " " << count[1] << " " << count[2];
    }
}
