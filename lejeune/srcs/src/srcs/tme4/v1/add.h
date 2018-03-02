/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ADD_H_RPCGEN
#define _ADD_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct operands {
	int operand1;
	int operand2;
};
typedef struct operands operands;

#define ADDITION 0x20000001
#define ADDITION_V1 1

#if defined(__STDC__) || defined(__cplusplus)
#define ADD 0
extern  int * add_1(operands *, CLIENT *);
extern  int * add_1_svc(operands *, struct svc_req *);
extern int addition_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ADD 0
extern  int * add_1();
extern  int * add_1_svc();
extern int addition_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_operands (XDR *, operands*);

#else /* K&R C */
extern bool_t xdr_operands ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ADD_H_RPCGEN */
