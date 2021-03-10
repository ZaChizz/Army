//
// Created by Admin on 15.02.2021.
//

#ifndef ARMY_ITRANSFORM_STATE_H
#define ARMY_ITRANSFORM_STATE_H

#include <iostream>
#include "../State.h"

class ITransformState {
    public:
        ITransformState();
        virtual ~ITransformState();

        virtual void transform()=0;
        virtual void sinchronization()=0;
};

#endif //ARMY_ITRANSFORM_STATE_H
