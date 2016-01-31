/*
* Copyright (C) 2010-2016  George Parisis and Dirk Trossen
* Copyright (C) 2015-2016  Mays AL-Naday
* All rights reserved.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License version
* 3 as published by the Free Software Foundation.
*
* Alternatively, this software may be distributed under the terms of
* the BSD license.
*
* See LICENSE and COPYING for more details.
*/
#ifndef CLICK_HELPER_HH
#define CLICK_HELPER_HH
/** The size in bytes of an information item or scope.
 *  The full identifier of a scope or item will be PURSUIT_ID_LEN * level in the graph.
 *  This should be the ONLY place where this definition exists!
 */
#define PURSUIT_ID_LEN 8
/** The size in bytes of the label of each Blackadder node (should be statistically unique)
 *  This label is used as an information item in pub/sub requests and therefore it has to be the same size as the PURSUIT_ID_LEN
 */
#define NODEID_LEN PURSUIT_ID_LEN
/** The size in bytes of the all LIPSIN identifiers, Link identifiers and internal identifiers
 */
#define FID_LEN 32
/****some strategies*****/
#define LINK_LOCAL          1
#define DOMAIN_LOCAL        2
#define IMPLICIT_RENDEZVOUS 3
#define BROADCAST_IF        4
#define NODE_LOCAL          5
/************************/
#define LOCAL_PROCESS 0
#define CLICK_ELEMENT  1
/*intra and inter click message types*/
#define PUBLISH_SCOPE 0
#define PUBLISH_INFO 1
#define UNPUBLISH_SCOPE 2
#define UNPUBLISH_INFO 3
#define SUBSCRIBE_SCOPE 4
#define SUBSCRIBE_INFO 5
#define UNSUBSCRIBE_SCOPE 6
#define UNSUBSCRIBE_INFO 7
#define PUBLISH_DATA  8 //the request
#define PUBLISH_DATA_iSUB 9
#define CONNECT 12
#define DISCONNECT 13
#define ADD_LINK 14
#define REMOVE_LINK 15
#define DISCONNECTED 16
#define RECONNECTED 17
/*****************************/
#define START_PUBLISH 100
#define STOP_PUBLISH 101
#define SCOPE_PUBLISHED 102
#define SCOPE_UNPUBLISHED 103
#define PUBLISHED_DATA 104
#define MATCH_PUB_SUBS 105
#define RV_RESPONSE 106
#define UPDATE_FID 107
#define PUBLISHED_DATA_iSUB 108
#define MATCH_PUB_iSUBS 109
#define PUBLISH_DATA_iMULTICAST 110
#define UPDATE_FID_iSUB 111
#define RE_PUBLISH 112
#define PAUSE_PUBLISH 113
#define RESUME_PUBLISH 114
/*RV RETURN CODES - these are unused..The LocalRV returns them for each pub/sub request*/
#define SUCCESS 0
#define WRONG_IDS 1
#define STRATEGY_MISMATCH 2
#define EXISTS 3
#define FATHER_DOES_NOT_EXIST 4
#define INFO_ITEM_WITH_SAME_ID 5
#define SCOPE_DOES_NOT_EXIST 6
#define SCOPE_WITH_SAME_ID 7
#define INFO_DOES_NOT_EXIST 8
#define DOES_NOT_EXIST 9
#define UNKNOWN_REQUEST_TYPE 10
#define UPDATE_RVFID 55
#define UPDATE_TMFID 56
/**********************************/
#define RV_ELEMENT 1 //put the correct click port here

#define NETLINK_BADDER 30 // see linux/netlink.h


#endif
