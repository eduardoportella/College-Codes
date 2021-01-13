#include <stdio.h>
#include <stdlib.h>
int main () {
	int n, r, s, i, t;
	printf("coloque o enesimo termo da equacao ");
	scanf("%i", &n);
	t=n;
	i=1;
	s=i/t;
		while(s<=n) {
			i=i+1;
			t=t-1;
		break;
		}
	/*r=s+1;*/
		printf("o resultado eh: %i\n", s);
system ("pause");
return 0;
}

