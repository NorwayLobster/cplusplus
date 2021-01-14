#include<iostream>
using namespace std;

/*
 *    �������� ʱ�临�Ӷ�O(n) �ռ临�Ӷ�O(r)
 *    ��exp=1��ʾ���ո�λ������a��������
 *    ...
 */
void radixSort(int a[], int n, int exp)
{
    int output[n];             // �洢���������ݵ���ʱ����
    int i, buckets[10] = {0};

    // �����ݳ��ֵĴ����洢��buckets[]��
    for (i = 0; i < n; i++)
        buckets[(a[i] / exp) % 10]++;

    // ʹ���ĺ��buckets[i]��ֵ��Ӧ��������output[]�е�λ��
    for (i = 1; i < 10; i++)
        buckets[i] += buckets[i - 1];

    // �����ݴ洢����ʱ����output[]��
    for (i = n - 1; i >= 0; i--)
    {
        output[buckets[(a[i] / exp) % 10] - 1] = a[i];
        buckets[(a[i] / exp) % 10]--;
    }

    // ������õ����ݸ�ֵ��a[]
    for (i = 0; i < n; i++)
        a[i] = output[i];
}

int main()
{
    int i;
    int K[] = {0, 1, 0, 4, 8, 2};
    int len = (sizeof(K)) / (sizeof(K[0]));// a�ĳ���

    radixSort(K, len, 1);// ��������

    cout << "After Sort:" << endl;
    for (i = 0; i < len; i++)
        cout << K[i] << " ";
    cout << endl;

    return 0;
}
