
#include "cli/cli.h"
#include "datastore/datastore.h"
#include "display/code_delta.h"
#include "display/documentation.h"
#include "query/query.h"

#include <iostream>

int main(int argc, char *argv[])
{
    kchq::Datastore ds("./store", "https://");
    
    kchq::CLI cli( argc, argv );
    if ( cli.has_arg("--version") || cli.has_arg("-v") )
    {
        std::cout << "Linux Kernel Change Query v0.1\nHumble beginnings..." << std::endl;
    }
    if ( cli.has_arg("--latest") )
    {
        std::string_view branch = cli.get_arg("--latest");
        std::cout << "latest retrival for " << branch  << " is WIP" << std::endl;
    }
    if ( cli.has_arg("--update") )
    {
        if ( ds.update_local_store() < 0 )
        {
            std::cerr << "Local datastore update failed." << std::endl;
            return -1;
        }
        else
        {
            std::cout << "Local store updated" << std::endl;
        }
    }
    // TODO query function delta between selected releases
    // TODO Delta Display
    // TODO Documentation Display 
    return 0;
}
