#include "cat.hpp"
#include "dog.hpp"
#include "dove.hpp"
#include <iostream>
#include <memory>

int main(int argc, char const *argv[])
{
    /* code */
    std::shared_ptr<animal> cat_ = std::make_shared<cat>(cat("cat"));
    std::shared_ptr<animal> dog_ = std::make_shared<dog>(dog("dog"));
    std::shared_ptr<animal> dove_ = std::make_shared<dove>(dove("dove"));
    std::cout << cat_->get_name() << std::endl;
    std::cout << dog_->get_name() << std::endl;
    std::cout << dove_->get_name() << std::endl;
    return 0;
}
