// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ServerCommand {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCOMMAND
public:
    class ServerCommand& operator=(class ServerCommand const &) = delete;
    ServerCommand(class ServerCommand const &) = delete;
    ServerCommand() = delete;
#endif

public:
    /*
    inline  ~ServerCommand(){
         (ServerCommand::*rv)();
        *((void**)&rv) = dlsym("??1ServerCommand@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static void setup(class Minecraft &);

protected:
    MCAPI static class Minecraft * mGame;

private:

};