#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	printf("���� �ϳ��� �Է��Ͻÿ�:");
	scanf("%i",&n);
	
	if(n<0)
		n=n*(-1);
		
	printf("������ %i�Դϴ�.\n",n);
   	

	return 0;
}
