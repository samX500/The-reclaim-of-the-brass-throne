//
// Created by samx500 on 2020-08-01.
//

#ifndef UNTITLEDROGUELIKEGAME_COMMAND_H
#define UNTITLEDROGUELIKEGAME_COMMAND_H


class Command {

    virtual void execute()=0;
    virtual void undo()=0;

};


#endif //UNTITLEDROGUELIKEGAME_COMMAND_H
