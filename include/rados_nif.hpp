/*
 * rados_nif.hpp
 *
 *  Created on: Sep 16, 2014
 *      Author: amit
 */

#ifndef RADOS_NIF_HPP_
#define RADOS_NIF_HPP_

#include <map>
#include <rados/librados.hpp>
#include <erl_nif.h>

#include "log.hpp"

using namespace std;

#define MAX_NAME_LEN       1024
#define MAX_FILE_NAME_LEN  2048
#define MAX_BUF_LEN        4096

extern XLog logger;

uint64_t new_id();

void map_cluster_add(uint64_t id, rados_t cluster);
rados_t map_cluster_get(uint64_t id);
rados_t map_cluster_remove(uint64_t id);

void map_ioctx_add(uint64_t id, rados_ioctx_t io);
rados_ioctx_t map_ioctx_get(uint64_t id);
rados_ioctx_t map_ioctx_remove(uint64_t id);

void map_list_ctx_add(uint64_t id, rados_list_ctx_t ctx);
rados_list_ctx_t map_list_ctx_get(uint64_t id);
rados_list_ctx_t map_list_ctx_remove(uint64_t id);

void map_xattr_iter_add(uint64_t id, rados_xattrs_iter_t it);
rados_xattrs_iter_t map_xattr_iter_get(uint64_t id);
rados_xattrs_iter_t map_xattr_iter_remove(uint64_t id);




#endif /* RADOS_NIF_HPP_ */
