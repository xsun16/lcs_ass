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


int lcs2(int *a, int n,  int *b, int m) {
	//write your code here
	if (n==0 || m == 0)
      	 	return 0;
   	else {
      		if (*(a+n-1) == *(b+m-1)){
         		return get_max(lcs2(a, n-1, b, m-1), lcs2(a, n, b, m-1), lcs2(a, n-1, b, m)) + 1;
      	}else{
         	return get_max(lcs2(a, n-1, b, m-1), lcs2(a, n, b, m-1), lcs2(a, n-1, b, m));
      	}
   	}
	return 0;
}

int main() {
	int n, m;  
  
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
	
	printf("Input sequences are:\n");	
	print_array(a, n);
	print_array(b, m);
	fflush(stdout);
	
	int lcs = lcs2(a, n, b, m);
	printf("LCS = %d\n",lcs);
	
	return 0;
}
