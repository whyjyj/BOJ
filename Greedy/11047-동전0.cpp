#include <cstdio>
using namespace std;

int arr[10];

int main() {
	int n,k,cnt=0;
	scanf("%d%d",&n,&k);
	
	for(int i=0;i<n;i++) {
		scanf("%d", &arr[i]);
	}
	
	for(int i=n-1;i>=0;i--) {
		cnt += k/arr[i];
		k %= arr[i];
	}
	
	printf("%d", cnt);
	
	
	return 0;
}
