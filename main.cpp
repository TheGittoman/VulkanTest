#include <Header.h>

int main()
{
    HelloTriangleApplication app;

    Test test;
    test.print();

    try
    {
        app.run();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}