//
// Created by samx500 on 2020-08-02.
//

#ifndef UNTITLEDROGUELIKEGAME_MOVECOMMAND_H
#define UNTITLEDROGUELIKEGAME_MOVECOMMAND_H


#include "Command.h"
#include "../Actor/GameObject.h"
#include "../Utility/Position.h"

class MoveCommand : public Command{

    MoveCommand(GameObject actor, Position newPosition);

    GameObject actor;
    Position oldPosition;
    Position newPosition;

    void execute() override =0;
    void undo() override =0;
};


#endif //UNTITLEDROGUELIKEGAME_MOVECOMMAND_H
