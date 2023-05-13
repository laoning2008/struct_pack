#include <struct_pack/struct_pack.hpp>
#include <vector>

struct person {
  int64_t id;
  std::string name;
  int age;
  double salary;
};

int main(int argc, char** argv) {
    person person1{.id = 1, .name = "hello struct pack", .age = 20, .salary = 1024.42};

    // one line code serialize
    std::vector<char> buffer = struct_pack::serialize(person1);

    // one line code deserialization
    auto person2 = struct_pack::deserialize<person>(buffer);

    return 0;
}
