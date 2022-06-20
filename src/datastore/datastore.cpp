
#include "datastore.h"

namespace kchq
{

Datastore::Datastore()
{
    file_store_ = {};
    remote_store_ = {};
}

Datastore::Datastore(std::string_view local, std::string_view remote) :
    file_store_(local), remote_store_(remote)
{
}

bool Datastore::set_file_store(std::string_view store)
{
    file_store_ = store;
    return true;
}

std::string_view Datastore::get_file_store()
{
    return file_store_;
}

bool Datastore::set_remote_store(std::string_view remote)
{
    remote_store_ = remote;
    return true;
}

std::string_view Datastore::get_remote_store()
{
    return remote_store_;
}

int Datastore::update_local_store()
{
    // TODO implement update
    return 0;
}

}