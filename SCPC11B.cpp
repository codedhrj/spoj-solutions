#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int a[1500];
int DEFAULT_MILES = 200;
int DESTINATION_MILES = 1422;

int main() {
	int n;
	scanf("%d",&n);
	while(n) {
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);		
		}
		sort(a, a+n);

		int possible = 1;
		for(int i=0;i<n;i++) {
			if(i==0 && a[i]!=0) {
				possible = 0;
			} else if(a[i] - a[i-1] > DEFAULT_MILES) {
				possible =0;
			} else if(i==n-1 && (DESTINATION_MILES - a[i] > DEFAULT_MILES/2)) {
				possible =0;
			}
			if(!possible) {
				break;
			}
		}
		possible ? puts("POSSIBLE") : puts("IMPOSSIBLE");
		scanf("%d",&n);
	}
	return 0;
}
