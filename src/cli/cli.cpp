
#include "cli.h"

namespace kchq
{

CLI::CLI(int argc, char * argv[]) : args_(argv, argv + argc)
{
}

int CLI::parse()
{
    // TODO
    return 0;
}

bool CLI::has_arg(const std::string_view &arg) const
{
    for(const auto &x: args_ ){
        if( x == arg) {
            return true;
        }
    }
    return false;
}

std::string_view CLI::get_arg(const std::string_view &arg) const
{
    for( auto it = args_.begin(); it != args_.end(); ++it )
    {
        if( *it == arg )
        {
            if( it + 1 != args_.end() )
            {
                return *(it + 1);
            }
        }
    }
    return "";
}

}
