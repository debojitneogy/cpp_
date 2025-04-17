#include <iostream>
using std::cout;
using std::cin;

//getting N
int GetInput() {
	int n;
	cout << "enter N:";
	cin >> n;
	return n;
}
int N = GetInput();


//creating matrix of N
struct cell
{
	bool isqueen  = false;
	bool CanAttack = false;
};
cell* matrix = new cell[N * N];

//place queen func
void PlaceQueen(int x,int y) {
	matrix[x * y].isqueen = true;
}

//display
void display() {

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) {

			bool a = matrix[i * j].isqueen;
			bool b = matrix[i * j].CanAttack;

			if (j == (N-1)){
				
				if (a == true) {
					cout << "Q\n";
				}
				else if (b == true) {
					cout << "A\n";
				}
				else {
					cout << "-\n";
				}
			}
			else {

				if (a == true) {
					cout << "Q ";
				}
				else if (b == true) {
					cout << "A ";
				}
				else {
					cout << "- ";
				}
			}
		}
	}
}

int main() {

	matrix[1 * 1].isqueen = true;
	matrix[1 * 0].CanAttack = true;

	display();

	delete[] matrix;
	return 0;
}