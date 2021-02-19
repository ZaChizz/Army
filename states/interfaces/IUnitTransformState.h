//
// Created by Admin on 19.02.2021.
//

#ifndef ARMY_IUNIT_TRANSFORM_STATE_H
#define ARMY_IUNIT_TRANSFORM_STATE_H

#include "ITransformState.h"

class IUnitTransformState {
    public:
        IUnitTransformState();
        virtual ~IUnitTransformState();

        virtual ITransformState* getMultiState()=0;
        virtual void setMultiState(ITransformState* iTransformState)=0;
};

#endif //ARMY_IUNIT_TRANSFORM_STATE_H
