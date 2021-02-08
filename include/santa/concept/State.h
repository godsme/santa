//
// Created by godsme on 2021/2/8.
//

#ifndef SANTA_STATE_H
#define SANTA_STATE_H

#include <cub/base/Keywords.h>
#include <santa/Status.h>

struct StateTransit;

FWD_DECL(ev, Event);

INTERFACE_DEF(State) {
    ABSTRACT(enter(StateTransit&) -> Status);
    ABSTRACT(handleEvent(StateTransit&, ev::Event const&) -> Status);
};


#endif //SANTA_STATE_H
