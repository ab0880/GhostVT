#pragma once

// The SDK's own XPC type constants, handed to Swift as functions. See
// module.modulemap for why they cannot be named directly in Swift, and
// `iGhostVTXPC` in Shared/Protocol for the Swift side. Nothing is defined
// here; every body is an SDK macro.

#include <xpc/xpc.h>
#include <xpc/connection.h>

static inline xpc_type_t ighostvt_xpc_type_array(void) { return XPC_TYPE_ARRAY; }
static inline xpc_type_t ighostvt_xpc_type_bool(void) { return XPC_TYPE_BOOL; }
static inline xpc_type_t ighostvt_xpc_type_connection(void) { return XPC_TYPE_CONNECTION; }
static inline xpc_type_t ighostvt_xpc_type_data(void) { return XPC_TYPE_DATA; }
static inline xpc_type_t ighostvt_xpc_type_dictionary(void) { return XPC_TYPE_DICTIONARY; }
static inline xpc_type_t ighostvt_xpc_type_error(void) { return XPC_TYPE_ERROR; }
static inline xpc_type_t ighostvt_xpc_type_int64(void) { return XPC_TYPE_INT64; }
static inline xpc_type_t ighostvt_xpc_type_string(void) { return XPC_TYPE_STRING; }
static inline xpc_type_t ighostvt_xpc_type_uint64(void) { return XPC_TYPE_UINT64; }
