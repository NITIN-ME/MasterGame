#include<iostream>
using namespace std;



class Array{
	public:
		int* arr;
		int size;
		
		Array(int x){
			size = x;
			arr = new int[x];
		}
		
	int search(int tofind){
		for(int i = 0 ; i < size; i ++ )
			if(arr[i] == tofind) return i;
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
	cout<<obj->search(22)<<endl;
	cout<<obj->search(33)<<endl;
	cout<<obj->search(11)<<endl;
	cout<<obj->search(55)<<endl;
	cout<<obj->search(06)<<endl;
	//int[] arr = {11,22,33,44,55};
	//cout<<search(arr,sizeof(arr)/sizeof(arr[0]),33)<<endl;s
	return 0;
}
