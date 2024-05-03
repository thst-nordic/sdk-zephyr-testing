/**
 * Copyright (c) 2024 Marcin Niestroj
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __DRIVERS_NET_NSOS_SOCKET_H__
#define __DRIVERS_NET_NSOS_SOCKET_H__

/**
 * @name Socket level options (NSOS_MID_SOL_SOCKET)
 * @{
 */
/** Socket-level option */
#define NSOS_MID_SOL_SOCKET 1

/* Socket options for NSOS_MID_SOL_SOCKET level */

/** Recording debugging information (ignored, for compatibility) */
#define NSOS_MID_SO_DEBUG 1
/** address reuse */
#define NSOS_MID_SO_REUSEADDR 2
/** Type of the socket */
#define NSOS_MID_SO_TYPE 3
/** Async error */
#define NSOS_MID_SO_ERROR 4
/** Bypass normal routing and send directly to host (ignored, for compatibility) */
#define NSOS_MID_SO_DONTROUTE 5
/** Transmission of broadcast messages is supported (ignored, for compatibility) */
#define NSOS_MID_SO_BROADCAST 6

/** Size of socket send buffer */
#define NSOS_MID_SO_SNDBUF 7
/** Size of socket recv buffer */
#define NSOS_MID_SO_RCVBUF 8

/** Enable sending keep-alive messages on connections */
#define NSOS_MID_SO_KEEPALIVE 9
/** Place out-of-band data into receive stream (ignored, for compatibility) */
#define NSOS_MID_SO_OOBINLINE 10
/** Socket priority */
#define NSOS_MID_SO_PRIORITY 12
/** Socket lingers on close (ignored, for compatibility) */
#define NSOS_MID_SO_LINGER 13
/** Allow multiple sockets to reuse a single port */
#define NSOS_MID_SO_REUSEPORT 15

/** Receive low watermark (ignored, for compatibility) */
#define NSOS_MID_SO_RCVLOWAT 18
/** Send low watermark (ignored, for compatibility) */
#define NSOS_MID_SO_SNDLOWAT 19

/**
 * Receive timeout
 * Applies to receive functions like recv(), but not to connect()
 */
#define NSOS_MID_SO_RCVTIMEO 20
/** Send timeout */
#define NSOS_MID_SO_SNDTIMEO 21

/** Bind a socket to an interface */
#define NSOS_MID_SO_BINDTODEVICE	25

/** Socket accepts incoming connections (ignored, for compatibility) */
#define NSOS_MID_SO_ACCEPTCONN 30

/** Timestamp TX packets */
#define NSOS_MID_SO_TIMESTAMPING 37
/** Protocol used with the socket */
#define NSOS_MID_SO_PROTOCOL 38

/** Domain used with SOCKET */
#define NSOS_MID_SO_DOMAIN 39

/** Enable SOCKS5 for Socket */
#define NSOS_MID_SO_SOCKS5 60

/** Socket TX time (when the data should be sent) */
#define NSOS_MID_SO_TXTIME 61

/** @} */

#endif /* __DRIVERS_NET_NSOS_SOCKET_H__ */