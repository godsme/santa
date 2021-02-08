//
// Created by godsme on 2021/2/8.
//

#ifndef SANTA_STATEFACTORY_H
#define SANTA_STATEFACTORY_H

#include <cub/base/Keywords.h>
#include <santa/Status.h>
#include <santa/concept/StateId.h>

struct State;

INTERFACE_DEF(StateFactory) {
    ABSTRACT(createInitialState() -> State*);
    ABSTRACT(createState(StateId) -> State*);
    ABSTRACT(reset() -> void);
};

#endif //SANTA_STATEFACTORY_H
