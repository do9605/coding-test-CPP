#include <iostream>
using namespace std;

const int MAX = 5000;
const int sumMAX = 400000; // -200,000 ~ 200,000

int A[MAX];
bool visited[sumMAX];

int main(void)
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> A[i];

    int result = 0;

    //A + B + C = D
    //A + B = D - C
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            //D - C ���� ����
            if (visited[A[i] - A[j] + 200000])
            {
                result++;
                break;
            }
        }
        //A + B ǥ��
        for (int j = 0; j <= i; j++)
            visited[A[i] + A[j] + 200000] = true;
    }
    cout << result << "\n";
    return 0;
}