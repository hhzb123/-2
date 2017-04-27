#include<iostream>
#include"calculate.h"
using namespace std;
double r,square;
void in() //输入模块 
{
	cin>>r;
}
void out()//输出模块 
{
	cout<<square;
}
int main()//主函数 
{
	in();
    square=	calculate(r);
	out();
} 
