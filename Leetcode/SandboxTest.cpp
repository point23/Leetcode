#include "pch.h"
#include "CppUnitTest.h"
#include "Sandbox.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(SandboxTest)
	{
	public:

		TEST_METHOD(DirectUse)
		{
			Sandbox sandbox;
			Assert::AreEqual(1, sandbox.foo());
		}
	};
}
