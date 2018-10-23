#include "Factory.hpp"
#include "BaseShape.hpp"
#include <memory>
#include <vector>

int main(int argc, char const *argv[])
{
    std::shared_ptr<Factory> factor = std::make_shared<Factory>();
    std::vector<BaseShape *> shapes;
    shapes.push_back(factor->creator("Squire"));
    shapes.push_back(factor->creator("Cycle"));
    shapes.push_back(factor->creator("Rect"));
    shapes.push_back(factor->creator("Diamond"));

    for (auto &shap : shapes)
    {
        shap->draw();
    }

    for (auto &shap : shapes)
    {
        delete shap;
    }
    try
    {
        shapes.push_back(factor->creator("newplan"));
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "Invalid_argument:" << e.what() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "exception:" << e.what() << std::endl;
    }

    return 0;
}
