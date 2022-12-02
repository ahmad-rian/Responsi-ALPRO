#include <iostream>
using namespace std;

int main()
{
    int NIM[11];
    int i,j,k,l;

    cout << "Masukan nomor pertemuan: ";
    cin >> k;

    cout << endl;

    cout << "Mendata NIM Mahasiswa" << endl;
    for (i=0;i<11;i++)
    {
        cout << "Masukan NIM ke-" << i+1 << " = ";
        cin >> NIM[i];
    }

    cout << endl;

    if (k%2!=0)
    {   
        cout << "Kelompok 1: " << endl;
        for (j=0;j<11;j++)
        {
            if (NIM[j]%2!=0)
            {
            cout << "H1D0220" << NIM[j] << " ";
            }
        }

        cout << endl;

        cout << "Kelompok 2: " << endl;
        for (l=0;l<11;l++)
        {
            if (NIM[l]%2==0)
            {
            cout << "H1D0220" << NIM[l] << " ";
            }
        }
    }

    else if (k%2==0)
    {
        cout << "Kelompok 1: " << endl;
        for (j=0;j<11;j++)
        {
            if (NIM[j]%2==0)
            {
            cout << "H1D0220" << NIM[j] << " ";
            }
        }

        cout << endl;

        cout << "Kelompok 2: " << endl;
        for (l=0;l<11;l++)
        {
            if (NIM[l]%2!=0)
            {
            cout << "H1D0220" << NIM[l] << " ";
            }
        }
    }


    return 0;
}