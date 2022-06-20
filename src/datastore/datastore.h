
#include <string>
#include <string_view>

namespace kchq
{

class Datastore
{
public:
    Datastore();
    Datastore(std::string_view local, std::string_view remote);
    ~Datastore() = default;

    bool set_file_store(std::string_view store);
    std::string_view get_file_store();
    bool set_remote_store(std::string_view remote);
    std::string_view get_remote_store();

    int update_local_store();

private:
    std::string file_store_;
    std::string remote_store_;

};

}
