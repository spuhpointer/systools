#include <stdio.h>

/* Print n as a binary number */
void printbitssimple(unsigned char n) {
	
	if (	(n>0x27 && n<0x5a ||
		n>0x61 && n<0x7a ||
		'[' == n ||
		']' == n ) && n!='@')
	{
		putc(n, stdout);
	}
	else
	{
		fprintf(stdout, "\\x%02x", n);
	}
}


int main(int argc, char **argv)
{
	int c1, c2;
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
