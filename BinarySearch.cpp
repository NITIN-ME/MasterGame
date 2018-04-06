#include<iostream>
using namespace std;


class Array{
	public:
		int* arr;
		int size;
		
		Array(int n){
			size = n;
			arr  = new int[n];
		}
		
		int search(int elem, int start, int end){
		if(end >= start){
				int mid = (start + end)/2;
				if(arr[mid] == elem) return mid;
				if(arr[mid] < elem) return search(elem, mid + 1, end);
				else return search(elem, start, mid - 1);
			}
		return -1;
		}
};

int main(){
	cout<<"Hello World!"<<endl;
	Array* obj = new Array(5);
	obj->arr[0] = 11;
	obj->arr[1] = 22;
	obj->arr[2] = 33;
	obj->arr[3] = 44;
	obj->arr[4] = 55;
	cout<<obj->search(22,0,4)<<endl;
	cout<<obj->search(33,0,4)<<endl;
	cout<<obj->search(11,0,4)<<endl;
	cout<<obj->search(55,0,4)<<endl;
	cout<<obj->search(06,0,4)<<endl;
	return 0;
}
