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

void insertionsort() {						//procedure Insertionsort

	int temp;								//membuat variable data temporer atau penyimpanan sementara
	int i, j;								//membuat variable j sebagai penanda

	for (i = 1; i <= n - 1; i++){			//1. looping dengan i dimulai dari 1 hingga n-1
		temp = arr[i];						//2. simpan nilai arr[i] ke variable sementara temp
		j = i - 1;							//3. setting nilai j sama dengan 
		while (j >= 0 && arr[j] > temp)		//4. looping while dimana nilai j lebih besar sama dengan 0 dan
		{									//arr[j] lebih besar daripada temp

			arr[j + 1] = arr[j];			//4a. simpan arr[j] ke dalam variable arr[j+1]
			j--;							//4b. decrement nilai j by 1
		}
		arr[j + 1] = temp;					//5. simpan nilai temp ke dalam arr[j+1]

		cout << "\nPass" << 1 << ": ";		//output ke layar
		for (int k = 0; k < n; k++) {		//looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";			//output ke layar
		}
	}
}



int main()
{
    
}
