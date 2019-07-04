/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */
#ifndef cmGetSourceFilePropertyCommand_h
#define cmGetSourceFilePropertyCommand_h

#include "cmConfigure.h" // IWYU pragma: keep

#include <string>
#include <vector>

#include "cm_memory.hxx"

#include "cmCommand.h"

class cmExecutionStatus;

class cmGetSourceFilePropertyCommand : public cmCommand
{
public:
  std::unique_ptr<cmCommand> Clone() override
  {
    return cm::make_unique<cmGetSourceFilePropertyCommand>();
  }

  /**
   * This is called when the command is first encountered in
   * the input file.
   */
  bool InitialPass(std::vector<std::string> const& args,
                   cmExecutionStatus& status) override;
};

#endif
