//============================================================================
// Name        : PascalsTriangle.cpp
// Author      : Jessica Wu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#ifndef MARMOSET_TESTING
int main();
#endif

int pascal_triangle(int n);
long triangle_calculator(int a, int b);
int pascal_triangle_recursive(int n);

int pascal_triangle(int n){
	int counter{0};
	int number;
	for(int i=0;i<n+1;i++){
		for(int j=0;j<=i;j++){
			if(j==0||i==0){
				number=1;
			}
			else{
				number=number*(i-j+1)/j;
			}
			counter++;
			std::cout<<number<<" ";
		}
		std::cout<<std::endl;
	}
	return counter;
}

long triangle_calculator(int a, int b){
	if((a==0&&b==0)||a==b||a==1||b==0){
		return 1;
	}
	else{
		return triangle_calculator(a-1,b)+triangle_calculator(a-1,b-1);
	}

}
int pascal_triangle_recursive(int n){
	int counter{};
	for(int i=0;i<=n;i++){
		for (int j=0;j<=i;j++){
			std::cout<<triangle_calculator(i,j)<<" ";
			counter++;
		}
		std::cout<<std::endl;
	}
	return counter;
}

#ifndef MARMOSET_TESTING
int main() {
	std::cout<<pascal_triangle(3);
	std::cout<<std::endl;
	std::cout<<pascal_triangle_recursive(4);

}
#endif
