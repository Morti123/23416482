#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	//Array7◦
		//.Дан массив размера N.Вывести его элементы в обратном порядке.
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	for (int i = n - 1; i >= 0; i--) {
		mas[i] = rand();
		cout << mas[i] << " ";
	}
	*/
	/*Array8.Дан целочисленный массив размера N.Вывести все содержащиеся в
		данном массиве нечетные числа в порядке возрастания их индексов, а
		также их количество K.*/
	/*const int n = 10;
		int mas[n];
		int k = 0;
		srand(time(nullptr));
		for (int i = 0; i < n; i++) {
			mas[i] = rand();
			if (mas[i] % 2 != 0) {
				k += 1;
				cout << mas[i]<< endl;
			}
		}
		cout << k << endl;*/
		/*Array9.Дан целочисленный массив размера N.Вывести все содержащиеся в
			данном массиве четные числа в порядке убывания их индексов, а также
			их количество K.*/
	/*const int n = 10;
			int mas[n];
			int k = 0;
			srand(time(nullptr));
			for (int i = n-1; i >=0; i--) {
				mas[i] = rand();
				if (mas[i] % 2 == 0) {
					k += 1;
					cout << mas[i] << endl;
				}
			}
			cout << k << endl;*/
			/*Array10.Дан целочисленный массив размера N.Вывести вначале все содержащиеся
				в данном массиве четные числа в порядке возрастания их индексов,
				а затем — все нечетные числа в порядке убывания их индексов.*/
	/*const int n = 10;
				int mas[n];
				srand(time(nullptr));
				for (int i = 0; i <n; i++) {
					mas[i] = rand();
					if (mas[i] % 2 == 0) {
						cout << mas[i] <<" ";
					}
				}
				cout << endl;
				for (int i = n - 1; i >= 0; i--) {
					mas[i] = rand();
					if (i % 2 != 0) {
						cout << mas[i] << " ";
					}
				}*/
				/*Array11.Дан массив A размера N и целое число K(1 ≤ K ≤ N).
					Вывести элементы массива с порядковыми номерами, кратными K : AK, A2·K, A3·K, . . . .
					Условный оператор не использовать.*/
	/*const int n = 10;
	int mas[n];
					int i, k;
					cin>> k;
					srand(time(nullptr));
					for (i = 0; i < n; i++) {
						mas[i] = rand();
						cout << i << mas[i] << " ";
					}
					cout << " " << endl;
					for (i = k - 1; i < n; i += k) {
						mas[i] = rand();
						cout << i << mas[i] << " ";
					}*/








	return 0;
}
