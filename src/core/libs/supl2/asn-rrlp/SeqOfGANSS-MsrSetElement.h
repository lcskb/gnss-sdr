/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _SeqOfGANSS_MsrSetElement_H_
#define _SeqOfGANSS_MsrSetElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct GANSS_MsrSetElement;

    /* SeqOfGANSS-MsrSetElement */
    typedef struct SeqOfGANSS_MsrSetElement
    {
        A_SEQUENCE_OF(struct GANSS_MsrSetElement)
        list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } SeqOfGANSS_MsrSetElement_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_SeqOfGANSS_MsrSetElement;
    extern asn_SET_OF_specifics_t asn_SPC_SeqOfGANSS_MsrSetElement_specs_1;
    extern asn_TYPE_member_t asn_MBR_SeqOfGANSS_MsrSetElement_1[1];
    extern asn_per_constraints_t asn_PER_type_SeqOfGANSS_MsrSetElement_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSS-MsrSetElement.h"

#endif /* _SeqOfGANSS_MsrSetElement_H_ */
#include <asn_internal.h>