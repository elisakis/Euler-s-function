//������� ������
#include <iostream>

using namespace std;

int main()
{
    setlocale (0, "Russian");
    int n, c, k, l;
    cout << "������� ����������� n\n";
    cin >> n;
    if (n > 0)
    {
        c = 1;
        for (int i = 2; i < n; i++)
        {
            k = n;
            l = i;
            do
            {
                if (k > l)
                {
                    k = k - l;
                }
                if (k < l)
                {
                    l = l - k;
                }
           }
            while (k != l);

            if (k == 1)
            {
                c++;
            }
        }
        cout << "�����:" << c;
    }
    else
    {
        cout << "������� �������� �����";
    }

    return 0;
}
