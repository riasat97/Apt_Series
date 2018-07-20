#include "stdio.h"



int main(void) {
    FILE *file;
    FILE *fileout;
	file=fopen("C:\\Users\\Envy\\Documents\\codeblocks\\read.txt","r");
 	fileout=fopen("C:\\Users\\Envy\\Documents\\codeblocks\\write.txt","w");
	int a,b,sum;
	fscanf(file,"%d %d",&a,&b);
	sum=a+b;
	fprintf(fileout,"%d + %d \t = %d",a,b,sum);
	printf("%d + %d \t = %d \n",a,b,sum);
	fclose(file);
	fclose(fileout);
	return 0;
}
