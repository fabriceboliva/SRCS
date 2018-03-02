/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "add.h"


void
addition_1(char *host, int a, int b, int *result)
{
	CLIENT *clnt;
	int  *result_1;
	operands  add_1_arg;

	add_1_arg.operand1 = a;
	add_1_arg.operand2 = b;
	
#ifndef	DEBUG
	clnt = clnt_create (host, ADDITION, ADDITION_V1, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = add_1(&add_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	*result=*result_1;

#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;
	int operand1, operand2, result;

	if (argc < 4) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	operand1 = atoi(argv[2]);
	operand2 = atoi(argv[3]);
	addition_1 (host, operand1, operand2, &result);
	printf("le resultat de l'addition est %d.\n", result);
exit (0);
}
