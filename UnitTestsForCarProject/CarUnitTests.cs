using TDDExampleCar;

namespace UnitTestsForCarProject
{
    public class Tests
    {
        Car carObj;

        [SetUp]
        public void Setup()
        {
            carObj = new Car();
        }

        [Test]
        public void checkIfCarCanBeCreated()
        {
           Assert.NotNull(carObj);
        }
    }
}