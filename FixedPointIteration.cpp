#include<iostream>
#include<math.h>
using namespace std;

double equation(double key){
	double ans = 0;
	ans = sqrt(sqrt(key + 10));
	return ans;
}

int main(){
	//x^4-x-10=0
	double x = 4;//first value
	//tramfor x = (x+10)^1/4 
	for(int i = 0;i < 10;i++){
		cout<<"x : "<<x<<endl;
		x = equation(x);
	}
}

