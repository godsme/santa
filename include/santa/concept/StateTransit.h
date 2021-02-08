//
// Created by godsme on 2021/2/8.
//

#ifndef SANTA_STATETRANSIT_H
#define SANTA_STATETRANSIT_H

#include <cub/base/Keywords.h>
#include <santa/Status.h>
#include <santa/concept/StateId.h>

INTERFACE_DEF(StateTransit) {
    ABSTRACT(transitTo(StateId) -> Status);
    ABSTRACT(transitTo(StateId to, StateId by) -> Status);
};

#endif //SANTA_STATETRANSIT_H
