#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}


void show(int d[], int N, int HL){
	for(int i = 0; i < N; i++){
		cout << " ";
		if(HL == i){
			cout << "\b";
			cout << "[" << d[i] << "]";
		}else{
			cout << d[i] << " ";
		}
	}
}

template <typename T>
void insertionSort(T d[],int N){
	//Write your code here.
	for(int i = 1; i < N; i++){
		show(d,N,i);
		cout << " => ";
		int temp = d[i];
		int j = i;
		
		while(temp > d[j - 1] && j > 0){
			swap(d[j], d[j - 1]);
			j--;
		}
		show(d,N,j);
		cout << "\n";
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
