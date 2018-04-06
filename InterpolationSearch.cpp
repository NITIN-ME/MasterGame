#include<iostream>
using namespace std;


class Array{
public:
	int* arr;
	int size;

	Array(int n){
		size = n;
		arr = new int[n];
	}

	int Search(int n){
		int lo = 0;
		int hi = size - 1;
		while(hi >= lo && arr[hi] >= n && arr[lo] <= n){
			int pos = lo + (hi - lo)* double(n - arr[lo])/double(arr[hi] - arr[lo]);
			if(arr[pos] == n) return pos;
			else if(arr[pos] > n) hi = pos - 1;
			else lo = pos + 1;
		}
		return - 1;
	}
};


int main(){
	cout<<"Hello World!"<<endl;
	Array* obj = new Array(10);
	obj->arr[0] = 11;
	obj->arr[1] = 22;
	obj->arr[2] = 33;
	obj->arr[3] = 44;
	obj->arr[4] = 55;
	obj->arr[5] = 66;
	obj->arr[6] = 77;
	obj->arr[7] = 88;
	obj->arr[8] = 99;
	obj->arr[9] = 1010;
	cout<<obj->Search(11)<<endl;
	cout<<obj->Search(22)<<endl;
	cout<<obj->Search(33)<<endl;
	cout<<obj->Search(44)<<endl;
	cout<<obj->Search(55)<<endl;
	cout<<obj->Search(66)<<endl;
	cout<<obj->Search(77)<<endl;
	cout<<obj->Search(88)<<endl;
	cout<<obj->Search(99)<<endl;
	cout<<obj->Search(19999)<<endl;
	cout<<obj->Search(1010)<<endl;
	cout<<obj->Search(10101)<<endl;
	cout<<obj->Search(22)<<endl;
	return 0;
}
