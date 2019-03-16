#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int size){
	for (int i=0; i<size; i++){
		printf("%d ",arr[i]);	
	}
	printf("\n");
}

int get_max(int a, int b, int c){
   	if(a>b && a>c)
      		return a;
   	if(b>a && b>c)
      		return b;
   	return c;
}

int lcs3(int *a, int n,  int *b, int m, int *c, int l) {
	//write your code here
	if (n == 0 || m == 0 || l == 0)
      			return 0;
   	else {
      		if((*(a+n-1) == *(b+m-1)) && (*(b+m-1) == *(c+l-1))){
         				return get_max(lcs3(a, n, b, m-1, c, l), lcs3(a, n-1, b, m, c, l), lcs3(a, n, b, m, c, l-1)) + 1;
      	}else{
        	return get_max(lcs3(a, n, b, m-1, c, l), lcs3(a, n-1, b, m, c, l), lcs3(a, n, b, m, c, l-1));
      	}
   	}
	return 0;
}

int main() {
	int n, m, l;  
  
	printf("Enter value of n: ");
	fflush(stdout);
	scanf("%d", &n);
	
	int * a = malloc(n*sizeof(int));
	printf("Enter %d values for array a, separated by spaces:\n", n);
	fflush(stdout);
	for (int i=0; i < n; i++){
		scanf("%d", &a[i]);
	}	
	
	printf("Enter value of m: ");
	fflush(stdout);
	scanf("%d", &m);

	int * b = malloc(m*sizeof(int));
	printf("Enter %d values for array b:\n", m);
	fflush(stdout);
	for (int i=0; i < m; i++){
		scanf("%d", &b[i]);
	}
	
	printf("Enter value of l: ");
	fflush(stdout);
	scanf("%d", &l);

	int * c = malloc(l*sizeof(int));
	printf("Enter %d values for array b:\n", l);
	fflush(stdout);
	for (int i=0; i < l; i++){
		scanf("%d", &c[i]);
	}
	
	printf("Input sequences are:\n");	
	print_array(a, n);
	print_array(b, m);
	print_array(c, l);
	fflush(stdout);
	
	int lcs = lcs3(a, n, b, m, c, l);
	printf("LCS = %d\n",lcs);
	
	return 0;
}
