#include <stdio.h>

/* Print n as a binary number */
void printbitssimple(unsigned char n) {
	unsigned int i;
	i = 1<<(sizeof(n) * 8 - 1);

	while (i > 0) {
		if (n & i)
			printf("1");
		else
			printf("0");
		i >>= 1;
	}
}


int main(int argc, char **argv)
{
	char c1, c2;
	int byte;
	char strb[4];
	int c;
	do 
	{
		c1 = getc (stdin);
	
		if (c1==EOF)
			break;
		c2 = getc (stdin);
		if (c2==EOF)
			break;

		sprintf(strb, "%c%c", c1, c2);	
		sscanf(strb, "%X", &byte);
		/* printf("byte=[%d] strb[%s]\n", byte, strb); */
		printbitssimple(byte);

	} while (c1 != EOF && c2 != EOF);
	printf("\n");		
	return 0;
}
