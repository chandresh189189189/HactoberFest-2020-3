#include <bits/stdc++.h>
using namespace std;

int CheckMinHeap(int *a, int n) {
	for(int i=0;i<(n-2)/2;i++) {
		if(a[i] > a[2*i+1] || a[i] > a[2*i+2] || 2*i+2!=n)
		return 0;
	}
	return 1;
}

int main()
{
	int a[] = {2,3,5,8,10};
	int n = sizeof(a)/sizeof(a[0]);
	if(CheckMinHeap)
	cout<<"Min Heap";
	else cout<<"Not Min Heap";
}

