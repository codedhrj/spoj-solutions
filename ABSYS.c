#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findPattern(char *value) {
	int len = strlen(value);
	int check = 0;
	for(int i=0; i<len; i++) {
		if(value[i] == 'm') {
			check = 1; 
			break;
		}
	}
	return check;
}

int main() {
	int t;
	char first[100], second[100], result[100];
	scanf("%d", &t);
	while(t--) {
		getchar();
		int f, s, r;
		scanf("%s + %s = %s", &first, & second, &result);
		f = atoi(first);
		s = atoi(second);
		r = atoi(result);
		
		if(findPattern(first)) {
			f = r-s;
		} else if(findPattern(second)) {
			s = r-f;
		} else {
			r = f+s;
		}
		printf("%d + %d = %d \n", f, s ,r);
	}
	return 0;
}
