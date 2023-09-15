#include "CppUnitTest.h"
#include "Domain/Rocket.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RocketTesting
{
    TEST_CLASS(RocketTests)
    {
    public:
        Rocket* rocket; // Declare a Rocket pointer for testing

        // This method is called before each test method is executed
        TEST_METHOD_INITIALIZE(TestInitialize)
        {
            rocket = new Rocket();
        }

        // This method is called after each test method is executed
        TEST_METHOD_CLEANUP(TestCleanup)
        {
            delete rocket;
        }

        // Test method to check if a Rocket instance can be created
        TEST_METHOD(CanCreateRocket)
        {
            // Use MSTest's Assert class to check if the rocket is created
            Assert::IsNotNull(rocket, L"Rocket should not be null");
            Assert::IsTrue(rocket->isValid(), L"Rocket should be valid"); // You can define your own logic for checking validity
        }
    };

}
