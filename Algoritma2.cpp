#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {													//looping
		cout << "Masukkan Banyaknya elemen pada array : ";			//output ke layar
		cin >> n;													//input dari user
		if (n <= 20)												//jika n berkurang dari atau sama dengan 20
			break;													//keluar dari loop
		else {														//jika n lebih dari 20
			cout << "\nArray dapat mempunyai maks 20 elemen.\n";	//output jika lebih dari 20
		}
	}
	cout << endl;								//membuat jarak per baris program
	cout << "======================" << endl;	//membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)					//menggunakan pengulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";	//memasukkan atau menginputkan nilai data n
		cin >> arr[i];							//menyimpan nilai data n kedalam array arr
	}
}

void insertionsort() {						

	int temp;								
	int i, j;								

	for (i = 1; i <= n - 1; i++){			
		temp = arr[i];						
		j = i - 1;							
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;

		cout << "\nPass" << 1 << ": ";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";
		}
	}
}

int main()
{
    
}
