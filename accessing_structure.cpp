#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	struct book{
	    char name,name2;
		float price;
		int pages;
	};
	
	struct book b1={'B','A',130.00,550};
	cout<<sizeof(b1)<<endl;
	
	printf("%u\n",&b1.name);
	printf("%u\n",&b1.price);
	printf("%u",&b1.pages);
	return 0;
}