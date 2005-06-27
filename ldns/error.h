/*
 * error.h
 *
 * error reporting function and definition
 *
 * a Net::DNS like library for C
 *
 * (c) NLnet Labs, 2004, 2005
 *
 * See the file LICENSE for the license
 */

#ifndef _LDNS_ERROR_H
#define _LDNS_ERROR_H

#include <ldns/util.h>

enum ldns_enum_status 
{
	LDNS_STATUS_OK,	
	LDNS_STATUS_EMPTY_LABEL,
	LDNS_STATUS_LABEL_OVERFLOW,
	LDNS_STATUS_DOMAINNAME_OVERFLOW,
	LDNS_STATUS_DOMAINNAME_UNDERFLOW,
	LDNS_STATUS_DDD_OVERFLOW,
	LDNS_STATUS_PACKET_OVERFLOW,
	LDNS_STATUS_INVALID_POINTER,
	LDNS_STATUS_MEM_ERR,
	LDNS_STATUS_INTERNAL_ERR,
	LDNS_STATUS_ERR,
	LDNS_STATUS_INVALID_INT,
	LDNS_STATUS_INVALID_IP4,
	LDNS_STATUS_INVALID_IP6,
	LDNS_STATUS_INVALID_STR,
	LDNS_STATUS_INVALID_B64,
	LDNS_STATUS_INVALID_HEX,
	LDNS_STATUS_INVALID_TIME,
	LDNS_STATUS_NETWORK_ERR,
	LDNS_STATUS_ADDRESS_ERR,
	LDNS_STATUS_UNKNOWN_INET,
	LDNS_STATUS_NOT_IMPL,
	LDNS_STATUS_NULL, 			/* NULL pointer error */
	LDNS_STATUS_CRYPTO_UNKNOWN_ALGO, 	/* crypto: unknown algorithm */
	LDNS_STATUS_CRYPTO_NO_RRSIG,
	LDNS_STATUS_CRYPTO_NO_DNSKEY,
	LDNS_STATUS_CRYPTO_NO_TRUSTED_DNSKEY,
	LDNS_STATUS_CRYPTO_VALIDATED,
	LDNS_STATUS_CRYPTO_BOGUS
};
typedef enum ldns_enum_status ldns_status;

extern ldns_lookup_table ldns_error_str[];

/**
 * look up a descriptive text by each error
 * \param[in] err ldns_status number
 * \return the string for that error
 */
const char *ldns_get_errorstr_by_id(ldns_status err);

#endif /* _LDNS_ERROR_H */
