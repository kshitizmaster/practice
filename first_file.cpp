#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
 void swap(int *a, int *b)
 {
 	int temp= *a;
 	*a = *b;
 	*b = temp;
 }
 int main()
 {
 	cout<<"Enter the two numbers"<<endl;
 	int a, b;
 	cin>>a>>b;
 	swap(&a, &b);
 	cout<<"After swappping the values are";
 	cout<<endl;
 	cout<<a<<b;
 	//this is a change that I am doing
 	//This is second change I am doing
 	//This is third change
 	//fourth change
 	
 }
