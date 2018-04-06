#include<iostream>
#include<cmath>
using namespace std;

int min(int a, int b){
	return a<b?a:b;
}

class Array{
public:
	int* arr;
	int size;

	Array(int n){
		size = n;
		arr = new int[n];
	}

	int Search(int n){
		int step = sqrt(size);
		int num = sqrt(size);
		//cout<<"Step is: "<<step<<endl;
		while(arr[min(size-1, step)]< n){
			step += num;
			if(step > n){
				return -1;
			}
		}

		//cout<<"Step is: "<<step<<endl;
		if(step >= num) step -= num;
		else step = 0;
		int end = step + num;

		while(arr[step] < n){
			step++;
			if(step == min(size - 1, end)) break;
		}

		if(arr[step] == n) return step;

		return -1;
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
