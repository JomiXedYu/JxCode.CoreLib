﻿
#include "CoreLib/CoreLib.h"
#include "CoreLib/DebugTool.h"
#include <format>
#include <array>
#include <iostream>
#include <string>


using namespace std;
using namespace JxCoreLib;

extern void TestOOP();
extern void TestProperty();
extern void TestString();
extern void TestEvents();
extern void TestReflection();
extern void TestJsonSerializer();
extern void TestManagedPtr();
extern void TestDynCreateInst();
extern void TestManagedVector();
extern void TestFormater();

int main()
{
    using namespace std;

    TestOOP();
    TestProperty();
    TestString();
    TestEvents();
    TestReflection();
    TestJsonSerializer();
    TestManagedPtr();
    TestDynCreateInst();
    TestManagedVector();
    TestFormater();

    return 0;
}
