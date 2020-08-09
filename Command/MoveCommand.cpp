//
// Created by samx500 on 2020-08-02.
//

#include "MoveCommand.h"

MoveCommand::MoveCommand(GameObject actor, Position newPosition):actor(actor),newPosition(newPosition),oldPosition(actor.getPosition()) {

}
