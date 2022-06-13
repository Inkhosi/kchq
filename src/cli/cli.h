
#include <vector>
#include <string_view>

namespace kchq
{

class CLI
{
public:
    CLI(int argc, char * argv[]);
    ~CLI() = default;

    int parse();

    bool has_arg(const std::string_view &arg) const;
    std::string_view get_arg(const std::string_view &arg) const;

private:
    std::vector<std::string_view> args_;
};

}
