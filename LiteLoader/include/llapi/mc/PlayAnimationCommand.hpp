/**
 * @file  PlayAnimationCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayAnimationCommand.
 *
 */
class PlayAnimationCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYANIMATIONCOMMAND
public:
    class PlayAnimationCommand& operator=(class PlayAnimationCommand const &) = delete;
    PlayAnimationCommand(class PlayAnimationCommand const &) = delete;
    PlayAnimationCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1693176133
     */
    virtual ~PlayAnimationCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@PlayAnimationCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1795007256
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@PlayAnimationCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   1312844060
     */
    MCAPI static void setup(class CommandRegistry &);

//private:

private:
    /**
     * @symbol ?mStopExpressionVersion@PlayAnimationCommand@@0W4MolangVersion@@B
     * @hash   -2102380207
     */
    MCAPI static enum class MolangVersion const mStopExpressionVersion;

};