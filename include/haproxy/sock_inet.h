/*
 * include/haproxy/sock_inet.h
 * This file contains declarations for AF_INET & AF_INET6 sockets.
 *
 * Copyright (C) 2000-2020 Willy Tarreau - w@1wt.eu
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, version 2.1
 * exclusively.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _HAPROXY_SOCK_INET_H
#define _HAPROXY_SOCK_INET_H

#include <sys/socket.h>
#include <sys/types.h>

#include <haproxy/api.h>

extern int sock_inet6_v6only_default;

int sock_inet4_addrcmp(const struct sockaddr_storage *a, const struct sockaddr_storage *b);
int sock_inet6_addrcmp(const struct sockaddr_storage *a, const struct sockaddr_storage *b);
int sock_inet_get_dst(int fd, struct sockaddr *sa, socklen_t salen, int dir);
int sock_inet_is_foreign(int fd, sa_family_t family);

#endif /* _HAPROXY_SOCK_INET_H */
